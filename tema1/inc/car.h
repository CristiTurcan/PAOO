#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
private:
    int speed;
    int fuelLevel;
    char *carBrand;

public:
    Car(int fuelLevel, const char *brand);

    ~Car();

    // getters
    int getSpeed() const;
    int getFuelLevel() const;
    char *getCarBrand() const;

    // setters
    void setSpeed(int speed);
    void drive(int distance);

    Car &operator=(const Car &other);

    void printCar() const;
};

#endif // CAR_H
