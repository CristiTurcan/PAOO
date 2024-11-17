#ifndef CARPARK_H
#define CARPARK_H

#include "car.h"
#include <vector>
#include <string>

class CarPark : public Car
{
private:
    std::vector<Car> cars; // List of cars in the car park
    int capacity;          // Maximum capacity of the car park

public:
    // Constructor and Destructor
    CarPark();
    CarPark(int capacity);
    ~CarPark();

    CarPark(const CarPark &other);                // Copy Constructor
    CarPark &operator=(const CarPark &other);     // Copy Assignment Operator
    CarPark(CarPark &&other) noexcept;            // Move Constructor
    CarPark &operator=(CarPark &&other) noexcept; // Move Assignment Operator

    // Functionality to manage the car park
    void addCar(const Car &car);
    void removeCar(int index);
    void printAllCars() const;

    // Getters
    size_t getCarCount() const;
    int getCapacity() const;
};

#endif // CARPARK_H
