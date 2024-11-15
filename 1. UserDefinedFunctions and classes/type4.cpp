#include <iostream>
using namespace std;

class car {
public:  // Make members public to access them
    string name;
    string type;
    int price;
    int year;
    int seats;

    // Method to display car details (pass by value)
    void displayByValue(car c) {
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
    void displayByReference(car &c) {
        cout << "Displaying by Reference:" << endl;
        cout << "**************************************" << endl;
        cout << "Name: " << c.name << endl;
        cout << "Type: " << c.type << endl;
        cout << "Price: " << c.price << endl;
        cout << "Year: " << c.year << endl;
        cout << "Seats: " << c.seats << endl;
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
    c2.name = "Maruti Swift";
    c2.type = "Hatchback";      
    c2.price = 700000;          
    c2.year = 2020;             
    c2.seats = 5;               

    car c3; 
    c3.name = "Kia Sonet";      
    c3.type = "SUV";            
    c3.price = 1200000;         
    c3.year = 2021;             
    c3.seats = 5;               

    car c4; 
    c4.name = "Toyota Fortuner"; 
    c4.type = "SUV";            
    c4.price = 3500000;        
    c4.year = 2022;            
    c4.seats = 7;              

    // Display the details of each car using pass by value
    c1.displayByValue(c1);  
    c2.displayByValue(c2);  
    c3.displayByValue(c3);  
    c4.displayByValue(c4);  

    // Display the details of each car using pass by reference
    c1.displayByReference(c1);  
    c2.displayByReference(c2);  
    c3.displayByReference(c3);  
    c4.displayByReference(c4);  

    return 0;
}



// Explanation of the Code
// Class Definition:

// The car class contains attributes like name, type, price, year, and seats, along with two methods to display the car details.
// Display by Value:

// displayByValue(car c): Takes a car object as a parameter (by value). This means a copy of the object is made, and any changes to c inside this method won’t affect the original car object.
// Display by Reference:

// displayByReference(car &c): Takes a car object as a reference parameter (using &). This means any changes made to c inside this method will affect the original car object because no copy is made.
// Main Function:

// In main(), you create several car objects (c1, c2, c3, c4) and populate their attributes.
// Each car's details are displayed first by value and then by reference, showcasing the differences in how the data is handled.