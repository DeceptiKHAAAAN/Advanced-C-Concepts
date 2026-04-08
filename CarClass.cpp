#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        // Constructors
        Car();
        Car(int yearModel, string make);
        // Getters
        int GetYearModel();
        string GetMake();
        int GetSpeed();
        // Setters
        void SetYearModel(int newYearModel);
        void SetMake(string newMake);
        void SetSpeed(int newSpeed);
        // Additional Functions
        void Accelerate();
        void Brake();
    private:
        // Variables
        int yearModel, speed;
        string make;
};
int main()
{
    // Creates a Car object with yearModel and make
    int yearModel = 2026;
    string make = "Kei Truck";
    Car myCar(yearModel, make);
    // Prints to user their car
    cout << "Your registered car is a " << myCar.GetYearModel() << " " << myCar.GetMake() << ".\n";
    // Increases speed 5 times
    for (int i = 0; i < 5; i++)
        myCar.Accelerate();
    // Decreases speed 5 times
    for (int i = 0; i < 5; i++)
        myCar.Brake();
    return 0;
}
// Default Constructor
Car::Car()
{
    yearModel = 0000;
    make = "EMPTY";
    speed = 0;
}
// Constructor taking in yearModel and make
Car::Car(int yearModel, string make)
{
    this->yearModel = yearModel;
    this->make = make;
    speed = 0;
}
// Returns yearModel
int Car::GetYearModel()
{
    return yearModel;
}
// Returns make
string Car::GetMake()
{
    return make;
}
// Returns current speed
int Car::GetSpeed()
{
    return speed;
}
// Sets yearModel
void Car::SetYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
// Sets make
void Car::SetMake(string newMake)
{
    make = newMake;
}
// Sets current speed
void Car::SetSpeed(int newSpeed)
{
    speed = newSpeed;
}
// Increases speed by 5
void Car::Accelerate()
{
    cout << "Increasing speed by 5...";
    speed += 5;
    cout << "     Your speed is now " << speed << endl;
}
// Decreases speed by 5 with a limit to not go below 0 mph
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