#include "car.h"
#include <iostream>
#include <cstring>

using namespace std;

// default constructor
Car::Car() : speed(0), fuelLevel(0), carBrand(nullptr)
{
    cout << "Default constructor called\n";
}

Car::Car(int fuelLevel, const char *brand)
    : speed(0), fuelLevel(fuelLevel)
{
    if (fuelLevel < 0)
    {
        throw invalid_argument("Fuel cannot be negative\n");
    }
    if (brand == nullptr || strlen(brand) == 0)
    {
        throw invalid_argument("Car brand cannot be null or empty\n");
    }

    carBrand = new char[strlen(brand) + 1];
    strcpy(carBrand, brand);
    cout << "Parameterized constructor called\n";
}

Car::~Car()
{
    delete carBrand;
    cout << "Destructor was called, heap was freed of car brand\n";
}

// copy constructor
Car::Car(const Car &otherCar)
    : speed(otherCar.speed),
      fuelLevel(otherCar.fuelLevel),
      carBrand(new char[strlen(otherCar.carBrand) + 1])
{
    strcpy(carBrand, otherCar.carBrand);
    cout << "Copy constructor called\n";
}

// overriding = operator
// copy assignment operator
Car &Car::operator=(const Car &other)
{
    if (this != &other)
    {
        delete[] carBrand;
        speed = other.speed;
        fuelLevel = other.fuelLevel;
        carBrand = new char[strlen(other.carBrand) + 1];
        strcpy(carBrand, other.carBrand);
    }
    cout << "Copy assignment operator called" << endl;
    return *this;
}

// move constructor
Car::Car(Car &&otherCar) noexcept
    : speed(otherCar.speed),
      fuelLevel(otherCar.fuelLevel),
      carBrand(otherCar.carBrand)
{
    otherCar.carBrand = nullptr; // nullify source pointer
    cout << "Move constructor called\n";
}

// move assignment operator
Car &Car::operator=(Car &&otherCar) noexcept {
    if (this != &otherCar) {
        delete[] carBrand;  // free old memory
        speed = otherCar.speed;
        fuelLevel = otherCar.fuelLevel;
        carBrand = otherCar.carBrand;
        otherCar.carBrand = nullptr;    //nullify source pointer
    }
    cout << "Move assignment operator called\n";
    return *this;
}

// getters
int Car::getSpeed() const
{
    return speed;
}

int Car::getFuelLevel() const
{
    return fuelLevel;
}

char *Car::getCarBrand() const
{
    return carBrand;
}

// setters
void Car::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
    {
        speed = newSpeed;
    }
}

// Simulate driving which decreases fuel level
void Car::drive(int distance)
{
    int fuelConsumed = distance / 10;
    if (fuelLevel >= fuelConsumed)
    {
        cout << "Start driving " << distance << " km. Fuel level before driving: " << fuelLevel << endl;
        fuelLevel -= fuelConsumed;
    }
    else
    {
        cout << "Not enough fuel to drive " << distance << " km.\n";
    }
}

void Car::printCar() const
{
    cout << "Car is " << (carBrand ? carBrand : "Unknown") << " FUEL: " << fuelLevel << " litres SPEED: " << speed << " km/h\n";
}
