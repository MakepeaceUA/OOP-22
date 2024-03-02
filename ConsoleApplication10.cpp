#include <iostream>
#include <string>
using namespace std;

class Transport 
{
protected:
    string name;
    int consumption;
public:
    Transport(string str,int val)
    {
        name = str;
        consumption = val;
    }
    virtual void Print() 
    {
        cout << "Name: " << name << "\n";
    }

    virtual void Consumption() 
    {
        cout << "Fuel consumption of " << name << ": " << consumption << " units\n";
    }
};

class Airplane : public Transport
{
public:
    Airplane(string str,int val) : Transport(str,val)
    {
    }
    void Print()
    {
       cout << name << "\n";
    }

    void Consumption()
    {
        cout << "Fuel consumption of " << name << ": " << consumption << " units\n";
    }
};
class Ship : public Transport
{
public:
    Ship(string str, int val) : Transport(str, val)
    {
    }
    void Print()
    {
        cout << name << "\n";
    }
    void Consumption()
    {
        cout << "Fuel consumption of " << name << ": " << consumption << " units\n";
    }
};


class Truck : public Transport
{
public:
    Truck(string str, int val) : Transport(str, val)
    {
    }
    void Print()
    {
        cout << name << "\n";
    }
    void Consumption()
    {
        cout << "Fuel consumption of " << name << ": " << consumption << " units\n";
    }
};

class Bicycle : public Transport
{
public:
    Bicycle(string str, int val) : Transport(str, val)
    {
    }
    void Print()
    {
        cout << name << "\n";
    }
    void Consumption()
    {
        cout << "Fuel consumption of " << name << ": " << consumption << " units\n";
    }
};

class Car : public Transport
{
public:
    Car(string str, int val) : Transport(str, val)
    {
    }
    void Print()
    {
        cout << name << "\n";
    }
    void Consumption()
    {
        cout << "Fuel consumption of " << name << ": " << consumption << " units\n";
    }
};


int main() {
    Transport* Point = nullptr;
    int choice,fuel;
    
    cout << "Choose a transport vehicle to create:\n";
    cout << "1. Airplane\n";
    cout << "2. Ship\n";
    cout << "3. Truck\n";
    cout << "4. Bicycle\n";
    cout << "5. Car\n";
    cin >> choice;


    switch (choice) 
    {
    case 1:
        cout << "Enter fuel consumption: ";
        cin >> fuel;
        Point = new Airplane("Airplane", fuel);
        break;
    case 2:
        cout << "Enter fuel consumption: ";
        cin >> fuel;
        Point = new Ship("Ship", fuel);
        break;
    case 3:
        cout << "Enter fuel consumption: ";
        cin >> fuel;
        Point = new Truck("Truck", fuel);
        break;
    case 4:
        cout << "Enter fuel consumption: ";
        cin >> fuel;
        Point = new Bicycle("Bicycle", fuel);
        break;
    case 5:
        cout << "Enter fuel consumption: ";
        cin >> fuel;
        Point = new Car("Car", fuel);
        break;
    default:
        cout << "Invalid choice. Please try again.\n";
    }
    Point->Print();
    Point->Consumption();
}