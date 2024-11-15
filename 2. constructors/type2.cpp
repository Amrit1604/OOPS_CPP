#include <iostream>
using namespace std;

class Car {
public:
    string name;
    string type;
    int price;
    int year;
    int seats;

    // Parameterized Constructor
    Car(int p, int y, string n, string t, int s) {
        name = n;
        type = t;
        price = p;
        year = y;
        seats = s;
    }

    // Method to display car details (pass by value)
    void displayByValue(Car c) {
        cout << "Displaying by Value:" << endl;
        cout << "**************************************" << endl;
        cout << "Name: " << c.name << endl;
        cout << "Type: " << c.type << endl;
        cout << "Price: " << c.price << endl;
        cout << "Year: " << c.year << endl;
        cout << "Seats: " << c.seats << endl;
        cout << "**************************************" << endl;
    }

    // Method to display car details (pass by reference)
    void displayByReference(Car &c) {
        cout << "Displaying by Reference:" << endl;
        cout << "**************************************" << endl;
        cout << "Name: " << c.name << endl;
        cout << "Type: " << c.type << endl;
        cout << "Price: " << c.price << endl;
        cout << "Year: " << c.year << endl;
        cout << "Seats: " << c.seats << endl;
        cout << "**************************************" << endl;
    }
}; // End of class definition

int main() {
    // Creating an object 'c1' of class 'Car' using the parameterized constructor
    Car c1(2000000, 2015, "Honda City", "Sedan", 5);

    // Display car details by value
    c1.displayByValue(c1);

    // Display car details by reference
    c1.displayByReference(c1);

    return 0;
}
