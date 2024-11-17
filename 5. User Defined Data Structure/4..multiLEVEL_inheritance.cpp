#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    int topSpeed;
    float mileage;
    string fuel;
};

// Intermediate derived class (single inheritance)
class TwoWheeler : public Vehicle {
public:
    int gears;

    void displayDetails() {
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Fuel Type: " << fuel << endl;
        cout << "Number of Gears: " << gears << endl;
    }
};

// Intermediate derived class (single inheritance)
class FourWheeler : public Vehicle {
public:
    int gears;

    void displayDetails() {
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Fuel Type: " << fuel << endl;
        cout << "Number of Gears: " << gears << endl;
    }
};

// Leaf classes (multilevel inheritance)
class Scooty : public TwoWheeler {
public:
    Scooty() {
        gears = 0; // Scooty usually has no gears (automatic)
    }
};

class Bike : public TwoWheeler {
public:
    Bike(int g) {
        gears = g; // Bikes can have multiple gears
    }
};

int main() {
    // Creating objects of the classes
    Scooty s;
    Bike b(5);
    FourWheeler f;

    // Setting values for the objects
    s.topSpeed = 80;
    s.mileage = 35.0;
    s.fuel = "Petrol";

    b.topSpeed = 150;
    b.mileage = 25.5;
    b.fuel = "Petrol";

    f.topSpeed = 200;
    f.mileage = 15.0;
    f.fuel = "Diesel";
    f.gears = 6;

    // Displaying details for each object
    cout << "Scooty Details:" << endl;
    s.displayDetails();

    cout << "\nBike Details:" << endl;
    b.displayDetails();

    cout << "\nFour Wheeler Details:" << endl;
    f.displayDetails();

    return 0;
}
