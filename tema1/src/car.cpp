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

    // carBrand = new char[strlen(brand) + 1];
    // strcpy(carBrand, brand);
    carBrand = make_unique<char[]>(strlen(brand) + 1);
    strcpy(carBrand.get(), brand);
    cout << "Parameterized constructor called\n";
}

Car::~Car()
{
    // delete carBrand;
    cout << "Destructor was called, heap was freed automatically of car brand\n";
}

// copy constructor
Car::Car(const Car &other)
    : speed(other.speed),
      fuelLevel(other.fuelLevel),
      carBrand(other.carBrand ? std::make_unique<char[]>(strlen(other.carBrand.get()) + 1) : nullptr)
{
    if (other.carBrand)
    {
        strcpy(carBrand.get(), other.carBrand.get());
    }
    cout << "Copy constructor called\n";
}

// overriding = operator
// copy assignment operator
Car &Car::operator=(const Car &other)
{
    if (this != &other)
    {
        speed = other.speed;
        fuelLevel = other.fuelLevel;

        carBrand = other.carBrand ? std::make_unique<char[]>(strlen(other.carBrand.get()) + 1) : nullptr;
        if (other.carBrand)
        {
            strcpy(carBrand.get(), other.carBrand.get());
        }
    }
    cout << "Copy assignment operator called\n";
    return *this;
}

// move constructor
Car::Car(Car &&otherCar) noexcept
    : speed(otherCar.speed),
      fuelLevel(otherCar.fuelLevel),
      carBrand(std::move(otherCar.carBrand))
{
    cout << "Move constructor called\n";
}

// move assignment operator
Car &Car::operator=(Car &&otherCar) noexcept
{
    if (this != &otherCar)
    {
        speed = otherCar.speed;
        fuelLevel = otherCar.fuelLevel;
        carBrand = std::move(otherCar.carBrand);
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
    return carBrand.get();
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
    cout << "Car is " << (carBrand ? carBrand.get() : "Unknown") << " FUEL: " << fuelLevel << " litres SPEED: " << speed << " km/h\n";
}
