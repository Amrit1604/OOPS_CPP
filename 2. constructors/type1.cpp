#include <iostream>  // Includes the input-output stream library for console operations

using namespace std; // Allows using standard library objects without prefixing 'std::'

// Class definition for 'Student'
class Student {
public:
    string name;   // Data member to store the student's name
    int age;       // Data member to store the student's age
    int roll;      // Data member to store the student's roll number
    float marks;   // Data member to store the student's marks




    // Parameterized Constructor
    // This constructor initializes the data members with the provided arguments
    Student(string s, int a, int r, float m) {
        name = s;    // Initialize 'name' with the value of 's'
        age = a;     // Initialize 'age' with the value of 'a'
        roll = r;    // Initialize 'roll' with the value of 'r'
        marks = m;   // Initialize 'marks' with the value of 'm'
    }

}; // Don't forget the semicolon after the class definition





int main() {
    // Creating an object 's1' of class 'Student' using the parameterized constructor
    // This constructor call directly initializes the data members of 's1'
    Student s1("Amrit", 20, 1604, 9.3);
    Student s2("Eknoor" , 19,1655, 9.0 );


   cout<<s1.name<<" \n"<<s1.age<<" "<<s1.roll<<" "<<s1.marks<<endl;
      cout<<s2.name<<" \n "<<s2.age<<" "<<s2.roll<<" "<<s2.marks<<endl;

    return 0; 
}
