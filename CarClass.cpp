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
    int yearModel = 2026;
    string make = "Kei Truck";
    Car myCar(yearModel, make);
    cout << "Your registered car is a " << myCar.GetYearModel() << " " << myCar.GetMake() << ".\n";
    for (int i = 0; i < 5; i++)
        myCar.Accelerate();
    for (int i = 0; i < 5; i++)
        myCar.Brake();
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

void Car::Accelerate()
{
    cout << "Increasing speed by 5...";
    speed += 5;
    cout << "     Your speed is now " << speed << endl;
}

void Car::Brake()
{
    if (speed <= 0)
    {
        cout << "Cannot brake anymore! You are at a complete stop.\n";
    }
    else
    {
        cout << "Decreasing speed by 5...     ";
        speed -= 5;
        cout << "Your speed is now " << speed << endl;
    }
}