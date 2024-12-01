#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
private:
    int speed;
    int fuelLevel;
    // char *carBrand;
    std::unique_ptr<char[]> carBrand;

public:
    //default constructor
    Car();

    Car(int fuelLevel, const char *brand);

    //destructor
    ~Car();

    //copy constructor
    Car(const Car &otherCar);
    
    //copy assignment operator
    Car &operator=(const Car &other);

    //move constructor
    Car(Car &&otherCar) noexcept;

    //move assignment operator
    Car &operator=(Car &&other) noexcept;

    // getters
    int getSpeed() const;
    int getFuelLevel() const;
    char *getCarBrand() const;

    // setters
    void setSpeed(int speed);
    void drive(int distance);

    void printCar() const;
};

#endif // CAR_H
