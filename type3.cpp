#include <iostream>
using namespace std;

// Class definition for 'person'
class Person {
    public:
    string name;   // Variable to store the person's name
    int age;       // Variable to store the person's age
    float height;  // Variable to store the person's height in meters (or any unit)

}; // Don’t forget the semicolon after the class definition

// Function to display the details of a person
void display(Person p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Height: " << p.height << " meters" << endl;
}

int main() {
    Person p1;  // Creates an instance 'p1' of class 'Person'

    // Prompt the user to enter details
    cout << "Enter name: ";
    cin >> p1.name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter height in meters: ";
    cin >> p1.height;

    // Call the display function to show the person's details
    display(p1);

    return 0;
}
