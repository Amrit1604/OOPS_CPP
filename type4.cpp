// CAR INFO PAGE

#include <iostream>
using namespace std;

class car {
public:  // Make members public to access them
    string name;
    string type;
    int price;
    int year;
    int seats;

    // Method to display car details
    void display() {
        cout << "**************************************" << endl;
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
        cout << "Price: " << price << endl;
        cout << "Year: " << year << endl;
        cout << "Seats: " << seats << endl;
        cout << "**************************************" << endl;
    }
};

int main() {
    car c1; 
    c1.name = "Honda City";
    c1.type = "Sedan";
    c1.price = 200000;
    c1.year = 2015;
    c1.seats = 5;

    car c2; 
    c2.name = "Maruti Swift";  // Changed c1 to c2
    c2.type = "Hatchback";      // Changed c1 to c2
    c2.price = 700000;          // Changed price for differentiation
    c2.year = 2020;             // Changed year for differentiation
    c2.seats = 5;               // Same seats

    car c3; 
    c3.name = "Kia Sonet";      // Changed c1 to c3
    c3.type = "SUV";            // Changed type for differentiation
    c3.price = 1200000;         // Changed price for differentiation
    c3.year = 2021;             // Changed year for differentiation
    c3.seats = 5;               // Same seats

    car c4; 
    c4.name = "Toyota Fortuner"; // Changed c1 to c4
    c4.type = "SUV";            // Same type as c3 for differentiation
    c4.price = 3500000;        // Changed price for differentiation
    c4.year = 2022;            // Changed year for differentiation
    c4.seats = 7;              // Different number of seats

    // Display the details of each car
    c1.display();  
    c2.display();  
    c3.display();  
    c4.display();  

    return 0;
}
