
    //MULTIPLE CONSTRUCTORS AND CONSTRUCT Methods -------------------------------- --------------------------------

#include <iostream>  // Include the input/output stream library
using namespace std;

// Define a class named 'Student'
class Student {

public:
    string name;
    int age;
    int roll;




    // Parameterized constructor: initializes 'name' and 'age'
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Default constructor: initializes an empty 'Student' object
    Student() {
    }

    Student(string n, int a, int r) {
        name = n;
        age = a;
        roll = r;
    }

        Student(int a, string n, int r) {
        name = n;
        age = a;
        roll = r;
    }
};




int main() {
    // Create 'Student' object 's1' using parameterized constructor
    Student s1("Amrit", 19);
    s1.roll = 1;  // Assign roll number
    s1.age = 20;  // Update age





    // Create 'Student' object 's2' using default constructor
    Student s2;
    s2.name = "Rahul";  // Assign values manually
    s2.age = 21;
    s2.roll = 2;



    Student s3("Amrit Joshi" , 22 , 3);



    Student s4(23, "Amrit", 4);





    // Print details of 's1' and 's2'
    cout << s1.name << " " << s1.age << " " << s1.roll << endl;
    cout << s2.name << " " << s2.age << " " << s2.roll << endl;
    cout << s3.name << " " << s3.age << " " << s3.roll << endl;
    cout << s4.name << " " << s4.age << " " << s4.roll << endl;

    return 0;  // End of the program
}
