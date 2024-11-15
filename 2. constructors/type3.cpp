#include <iostream>  // Including the standard input/output stream library
using namespace std;

// Defining a class named 'Student'
class Student {

public:
    // Public member variables that can be accessed directly
    string name;
    int age;
    int roll;






    // **Parameterized Constructor**
    // This constructor allows us to create a 'Student' object with specific values for name, age, and roll number.
    Student(string n, int a, int r) {
        name = n;
        age = a;
        roll = r;
    }






    // **Default Constructor**
    // This constructor doesn't take any arguments. It is used when we want to create a 'Student' object without providing initial values.
    Student() {
        // This can be left empty or used to initialize default values if needed.
    }
};







int main() {
    
    // Creating a 'Student' object 's1' using the parameterized constructor
    Student s1("Amrit", 20, 1);

    // Creating another 'Student' object 's2' using the default constructor
    Student s2;

    // Manually assigning values to the member variables of 's2'
    s2.name = "Rahul";
    s2.age = 21;
    s2.roll = 2;

    // Displaying the details of the 'Student' object 's1'
    cout << s1.name << " " << s1.age << " " << s1.roll << endl;

    // Displaying the details of the 'Student' object 's2'
    cout << s2.name << " " << s2.age << " " << s2.roll << endl;

    return 0;  // Program ends successfully
}
