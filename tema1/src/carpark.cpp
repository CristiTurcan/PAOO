#include "carpark.h"
#include <iostream>
#include <utility>

using namespace std;

// Constructor with capacity parameter
CarPark::CarPark() : capacity(0)
{
    cout << "Default constructor called\n";
}

CarPark::CarPark(int capacity) : capacity(capacity)
{
    cout << "CarPark created with capacity: " << capacity << " cars.\n";
}

// Destructor
CarPark::~CarPark()
{
    cout << "CarPark destroyed. Number of cars: " << cars.size() << "\n";
}

// Copy Constructor
CarPark::CarPark(const CarPark &other) : capacity(other.capacity), cars(other.cars) {
    cout << "Copy constructor called. CarPark copied.\n";
}

// CarPark::CarPark(const CarPark &other) = delete;

// Copy Assignment Operator
CarPark &CarPark::operator=(const CarPark &other) {
    if (this != &other) { // Prevent self-assignment
        capacity = other.capacity;
        cars = other.cars;
        cout << "Copy assignment operator called. CarPark copied.\n";
    }
    return *this;
}

// Move Constructor
CarPark::CarPark(CarPark &&other) noexcept : capacity(other.capacity), cars(std::move(other.cars)) {
    other.capacity = 0; // Leave the moved-from object in a valid state
    cout << "Move constructor called. CarPark moved.\n";
}

// Move Assignment Operator
CarPark &CarPark::operator=(CarPark &&other) noexcept {
    if (this != &other) { // Prevent self-assignment
        capacity = other.capacity;
        cars = std::move(other.cars);
        other.capacity = 0; // Leave the moved-from object in a valid state
        cout << "Move assignment operator called. CarPark moved.\n";
    }
    return *this;
}

// Add a car to the car park
void CarPark::addCar(const Car &car)
{
    if (cars.size() < capacity)
    {
        cars.push_back(car);
        cout << "Car added to the car park: ";
        car.printCar();
    }
    else
    {
        cout << "CarPark is full! Cannot add more cars.\n";
    }
}

// Remove a car by index
void CarPark::removeCar(int index)
{
    if (index >= 0 && index < cars.size())
    {
        cout << "Removing car: ";
        cars[index].printCar();
        cars.erase(cars.begin() + index);
    }
    else
    {
        cout << "Invalid index. No car removed.\n";
    }
}

// Print all cars in the car park
void CarPark::printAllCars() const
{
    if (cars.empty())
    {
        cout << "The car park is empty.\n";
        return;
    }

    cout << "Cars in the car park:\n";
    for (size_t i = 0; i < cars.size(); ++i)
    {
        cout << i + 1 << ". ";
        cars[i].printCar();
    }
}

// Get the count of cars in the car park
size_t CarPark::getCarCount() const
{
    return cars.size();
}

// Get the capacity of the car park
int CarPark::getCapacity() const
{
    return capacity;
}
