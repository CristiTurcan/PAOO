#include "car.h"
#include <iostream>

using namespace std;

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

    cout <<"\nMove constructor\n";
    Car car4 = std::move(car2);
    cout << "New car: "; car4.printCar();
    cout << "Old car: "; car2.printCar();

    cout <<"\nMove assignment operator:\n";
    car1 = std::move(car4);
    cout << "New car: "; car1.printCar();
    cout << "Old car: "; car4.printCar();

    cout << endl;
    return 0;
}
