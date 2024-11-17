//  ACCESS MODIFIERS ARE OF 3 TYPES 

// PUBLIC, PROTECTED, AND PRIVATE

//  1. PUBLIC-- Members declared as public are accessible from anywhere in the program.
// Both member functions and variables can be accessed from outside the class.

//  2. PROTECTED-- Members declared as protected are accessible within the class, and by derived (inherited) classes, but not from outside the class.
// This is commonly used in inheritance scenarios.

// 3. PRIVATE -- Members declared as private are only accessible within the class that defines them.
// They are not accessible outside the class or even in derived classes.

// GETTER FUNCTION -- 

 
#include <iostream>
using namespace std;

class student {
public:
    string name;
    int age;

    // Constructor to initialize name, age, and roll number
    student(string n, int a, int r) {
        name = n;
        age = a;
        rollno = r;
    }

    // Getter function to return roll number
    int getroll() {

        // Private member can be accessed within the class using getter function
        return rollno;
        // But not outside the class, which is a good practice to maintain data encapsulation
        }

    int setroll(int r) {
        // Private member can be updated within the class using setter function
        rollno = r;
        return r;
        // But not outside the class, which is a good practice to maintain data encapsulation
    }

private:
    int rollno;
};

int main() {
    // Creating an object of student class
    student s("Amrit", 20, 1604);

    // Accessing public members directly
    cout << s.name << " " << s.age << " " << s.getroll() << endl;

    // Accessing private member through getter function
    cout << s.getroll() << endl;
    // Trying to access private member directly will result in compilation error
    // cout << s.rollno << endl;
    // Trying to access private member through setter function
    s.setroll(1605);
    cout << s.getroll() << endl;
    // Trying to access private member directly will result in compilation error
    // cout << s.rollno << endl;
    return 0;
}

