#include "car.h"
#include <iostream>
#include <cstring>

using namespace std;

Car::Car(int fuelLevel, const char *brand)
    : speed(0), fuelLevel(fuelLevel)
{
    carBrand = new char[strlen(brand) + 1];
    strcpy(carBrand, brand);
}

Car::~Car()
{
    delete carBrand;
    cout << "Destructor was called, heap was freed of car brand\n";
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

// overriding = operator
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
    return *this;
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
    cout << "Car is " << this->carBrand << " FUEL: " << this->fuelLevel << " litres SPEED: " << this->speed << " km/h\n";
}
