#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        Car();
        Car(int yearModel, string make);
        int GetYearModel();
        string GetMake();
        int GetSpeed();
        void SetYearModel(int newYearModel);
        void SetMake(string newMake);
        void SetSpeed(int newSpeed);
        void Accelerate();
        void Brake();
    private:
        int yearModel, speed;
        string make;
};

int main()
{
    return 0;
}

Car::Car()
{
    yearModel = 0000;
    make = "EMPTY";
    speed = 0;
}

Car::Car(int yearModel, string make)
{
    this->yearModel = yearModel;
    this->make = make;
    speed = 0;
}

int Car::GetYearModel()
{
    return yearModel;
}

string Car::GetMake()
{
    return make;
}

int Car::GetSpeed()
{
    return speed;
}

void Car::SetYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::SetMake(string newMake)
{
    make = newMake;
}

void Car::SetSpeed(int newSpeed)
{
    speed = newSpeed;
}