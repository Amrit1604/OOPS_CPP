// User-Defined Function: A function created by the user to perform a specific task, defined with a unique name, parameters, and body, allowing it to be called multiple times in the program.




#include <iostream>  // Includes the input-output stream library for console operations

using namespace std; // Allows using standard library objects without prefixing 'std::'

// Class definition for 'student'
class Student {
    public:
    string name;   // Variable to store the student's name
    int age;       // Variable to store the student's age
    int roll;      // Variable to store the student's roll number
    float marks;   // Variable to store the student's marks

}; // Don't forget the semicolon after the class definition

int main() {
    Student s;       // Creates an instance 's' of class 'student'
    
    // Assigning values to the data members of the 'student' object 's'
    s.name = "Amrit";  // Setting the name of the student
    s.age = 20;        // Setting the age of the student
    s.roll = 1;        // Setting the roll number of the student
    s.marks = 90.5;    // Setting the marks of the student

    // Optionally, display the values if needed for verification
    cout << "Student Details:\n";
    cout << "Name: " << s.name << "\n";
    cout << "Age: " << s.age << "\n";
    cout << "Roll Number: " << s.roll << "\n";
    cout << "Marks: " << s.marks << endl;

    return 0; // End of program, returns 0 indicating successful execution
}
