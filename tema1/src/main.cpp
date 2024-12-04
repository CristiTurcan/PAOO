#include "car.h"
#include "carpark.h"
#include <iostream>
#include <thread>

using namespace std;

// Function to simulate adding cars in a thread
void addCars(CarPark &carPark)
{
    for (int i = 0; i < 5; ++i)
    {
        Car car(50 + i * 10, ("Car" + to_string(i)).c_str());
        carPark.addCar(car);
        this_thread::sleep_for(chrono::milliseconds(100)); // Simulate delay
    }
}

// Function to simulate removing cars in a thread
void removeCars(CarPark &carPark)
{
    for (int i = 0; i < 5; ++i)
    {
        carPark.removeCar(0);
        this_thread::sleep_for(chrono::milliseconds(150)); // Simulate delay
    }
}

int main()
{
    Car myCar(100, "BMW");
    Car secCar(120, "Audi");

    cout << "EXEMPLU INCAPSULARE: datele (viteza, fuel level) sunt luate cu gettere si settere, nu accesand direct variabila\n";

    myCar.setSpeed(60); // set speed to 50kmh
    cout << "Current speed: " << myCar.getSpeed() << " km/h\n";
    myCar.drive(50); // drive 50km
    cout << "Remaining fuel level after 50km with 60km/h: " << myCar.getFuelLevel() << " liters\n";

    cout << "\nEXEMPLU SUPRASCRIERE OPERATOR =\n";
    cout << "masina 1: ";
    myCar.printCar();
    cout << "masina 2: ";
    secCar.printCar();

    myCar = secCar;
    cout << "Dupa masina 1 = masina 2\n";
    cout << "masina 1: ";
    myCar.printCar();
    cout << "masina 2: ";
    secCar.printCar();

    cout << "\nEXEMPLU ELIBERAREA HEAP DIN DESTRUCTOR\n";
    cout << "Car brand is: " << myCar.getCarBrand() << endl;

    cout << "\n\n TEMA 2 \n\n";

    CarPark carPark(2);

    Car carBMW(50, "BMW");
    Car carAUDI(70, "Audi");
    Car carTESLA(90, "Tesla");

    cout << "\nAdding cars to the car park:\n";
    carPark.addCar(carBMW);
    carPark.addCar(carAUDI);

    // Attempt to add a car beyond capacity
    cout << "\nTrying to add another car:\n";
    carPark.addCar(carTESLA);

    // Print all cars
    cout << "\nPrinting all cars in the car park:\n";
    carPark.printAllCars();

    try
    {
        cout << "Creating an invalid car\n";
        Car invalidCar(-30, "VW");
    }
    catch (const exception &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    cout << "Default constructor:\n";
    Car car1;
    car1.printCar();

    cout << "\nParameterized constructor:\n";
    Car car2(100, "Volkswagen");

    cout << "\nCopy constructor:\n";
    Car car3 = car2;
    car3.printCar();

    cout << "\nMove constructor\n";
    Car car4 = std::move(car2);
    cout << "New car: ";
    car4.printCar();
    cout << "Old car: ";
    car2.printCar();

    cout << "\nMove assignment operator:\n";
    car1 = std::move(car4);
    cout << "New car: ";
    car1.printCar();
    cout << "Old car: ";
    car4.printCar();

    cout << "\nCreating a copy of carPark1 (Copy Constructor):\n";
    CarPark carPark2 = carPark; // Calls the copy constructor
    carPark2.printAllCars();

    cout << "\nAssigning carPark2 to carPark3 (Copy Assignment Operator):\n";
    CarPark carPark3(5); // Create a car park with a different capacity
    carPark3 = carPark2; // Calls the copy assignment operator
    carPark3.printAllCars();

    cout << "\nMoving carPark1 to carPark4 (Move Constructor):\n";
    CarPark carPark4 = std::move(carPark); // Calls the move constructor
    carPark4.printAllCars();

    cout << "\nAssigning carPark4 to carPark5 (Move Assignment Operator):\n";
    CarPark carPark5(10);
    carPark5 = std::move(carPark4); // Calls the move assignment operator
    carPark5.printAllCars();

    cout << endl;
    Car *carParkNew = new CarPark(2);

    CarPark carParkThread(3);

    cout << "\n ***Mutex example***\n";

    // Create threads to add and remove cars
    thread t1(addCars, ref(carParkThread));
    thread t2(removeCars, ref(carParkThread));

    // Wait for threads to finish
    t1.join();
    t2.join();

    cout << "\nFinal state of the car park:\n";
    carParkThread.printAllCars();

    cout << "\n*** Shared pointer***\n";

    shared_ptr<Car> sharedCar1 = make_shared<Car>(100, "Tesla");
    shared_ptr<Car> sharedCar2 = sharedCar1; // Shared ownership

    cout << "Shared Car 1 details:\n";
    sharedCar1->printCar();

    cout << "Shared Car 2 details:\n";
    sharedCar2->printCar();

    // Modifying the car details using one shared_ptr affects the other
    cout << "\nModifying car via sharedCar1...\n";
    sharedCar1->setSpeed(150);

    cout << "Shared Car 1 after modification:\n";
    sharedCar1->printCar();

    cout << "Shared Car 2 after modification:\n";
    sharedCar2->printCar();

    cout << "\n***Unique pointer***\n";

    // Unique pointer example
    unique_ptr<Car> uniqueCar = make_unique<Car>(80, "BMW");
    cout << "\nUnique Car details:\n";
    uniqueCar->printCar();

    // Moving the unique pointer
    unique_ptr<Car> movedCar = std::move(uniqueCar);
    cout << "\nMoved Unique Car details:\n";
    movedCar->printCar();

    if (!uniqueCar)
    {
        cout << "uniqueCar is now nullptr after move.\n";
    }

    // Shared pointers in a container
    cout << "\nShared pointers in a container:\n";
    vector<shared_ptr<Car>> carCollection;
    carCollection.push_back(sharedCar1);
    carCollection.push_back(make_shared<Car>(90, "Audi"));

    for (const auto &car : carCollection)
    {
        car->printCar();
    }

    cout << "\nExiting main: unique_ptr and shared_ptr manage memory automatically.\n";
    return 0;

    cout << endl;
    return 0;
}