#include<iostream>
class Car
{
private:
    float fuel;
    float speed;
    int passengers;
    static int totalCount;

public:
    Car();
    Car(float amount);
    Car(float amount, int pass);
    ~Car();
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard() const;
    static void ShowCount();
};

int Car::totalCount = 0; // static variaable initialization

// Constructors
Car::Car()
{
    std::cout << "Car()" << std::endl;
}
Car::Car(float amount)
{
    std::cout << "Car(float)" << std::endl;
}
Car::Car(float amount, int pass)
{
    std::cout << "Car(float, int)" << std::endl;
    ++totalCount;
    fuel = amount;
    speed = 0;
    passengers = pass;
}

//Destructor
Car::~Car()
{
    --totalCount;
    std::cout << "~Car()" << std::endl;
}

//Member function 
void Car::FillFuel(float amount)
{
    fuel = amount;
}
void Car::Accelerate()
{
    this->speed++;
    this->fuel -= 0.5f;
}
void Car::Brake()
{
    speed = 0;
}
void Car::AddPassengers(int count)
{
    passengers = count;
}

//Const memeber function invoked by const objects only 
void Car::Dashboard() const
{
    std::cout << "Fuel:" << fuel << std::endl;
    std::cout << "Speed:" << speed << std::endl;
    std::cout << "Passengers:" << passengers << std::endl;
}
void Car::ShowCount()
{
    std::cout << "Total cars : " << totalCount << std::endl;
}
int main()
{
    // const object cannot make change in data memebrs  
    Car const c;
    c.Dashboard();
    c.ShowCount();


    return 0;
}