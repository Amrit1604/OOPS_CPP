#include <iostream>  // Includes the standard input-output library
using namespace std; // Allows usage of standard library objects without prefixing 'std::'

// Class definition for Student
class Student {
    public:
    string name;        // Variable to store the name of the student
    int age;            // Variable to store the age of the student
    float marks[5];     // Array to store marks for 5 subjects




    // Method to display student details
    void display() {
        cout << "Name: " << name << "\nAge: " << age << "\nMarks: ";
        // Loop to print each mark in the array
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl; // Ends line after printing marks
    }
};





int main() {
    // Creating an instance of Student, s1, and setting its attributes
    Student s1;
    s1.name = "Amrit";   // Setting the name of the student
    s1.age = 20;         // Setting the age of the student
    // Assigning marks to the 5 subjects
    s1.marks[0] = 90;
    s1.marks[1] = 85;
    s1.marks[2] = 78;
    s1.marks[3] = 88;
    s1.marks[4] = 92;

    // Creating another instance of Student, s2, with different data
    Student s2;
    s2.name = "Rohan";   // Setting the name of the second student
    s2.age = 21;         // Setting the age of the second student
    // Assigning marks to the 5 subjects for s2
    s2.marks[0] = 95;
    s2.marks[1] = 90;
    s2.marks[2] = 85;
    s2.marks[3] = 92;
    s2.marks[4] = 88;




    // Displaying the details of the first student
    s1.display();
    cout << endl << "***********************************" << endl; // Divider between students

    // Displaying the details of the second student
    s2.display();

    return 0; // Program executed successfully
}





