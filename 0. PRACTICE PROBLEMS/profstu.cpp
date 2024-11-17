#include <iostream>
using namespace std;

// Base class Person
class Person {
public:
    int age;
    virtual void getdata() = 0;    // Pure virtual function
    virtual void putdata() = 0;    // Pure virtual function
};

// Derived class Professor
class Professor : public Person {
private:
    int publications;
    int cur_id;
    static int professor_id;  // Static variable to track Professor IDs

public:
    Professor() {
        cur_id = ++professor_id;  // Increment and assign current Professor ID
    }

    void getdata() override {
        cout << "Enter age and number of publications of the professor: ";
        cin >> age >> publications;
    }

    void putdata() override {
        cout << "Professor Age: " << age
             << ", Publications: " << publications
             << ", ID: " << cur_id << endl;
    }
};

int Professor::professor_id = 0;  // Initialize static variable

// Derived class Student
class Student : public Person {
private:
    int marks[6];
    int cur_id;
    static int student_id;  // Static variable to track Student IDs

public:
    Student() {
        cur_id = ++student_id;  // Increment and assign current Student ID
    }

    void getdata() override {
        cout << "Enter age and marks of 6 subjects for the student: ";
        cin >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout << "Student Age: " << age
             << ", Total Marks: " << sum
             << ", ID: " << cur_id << endl;
    }
};

int Student::student_id = 0;  // Initialize static variable

int main() {
    int n;
    cout << "Enter the number of people (Professor or Student): ";
    cin >> n;

    Person* people[n];  // Array of pointers to Person

    for (int i = 0; i < n; i++) {
        int type;
        cout << "Enter 1 for Professor, 2 for Student: ";
        cin >> type;

        if (type == 1) {
            people[i] = new Professor();  // Create Professor object
        } else if (type == 2) {
            people[i] = new Student();    // Create Student object
        } else {
            cout << "Invalid type!" << endl;
            return 0;
        }

        people[i]->getdata();  // Get data for the object
    }

    cout << "\nDisplaying Data:\n";
    for (int i = 0; i < n; i++) {
        people[i]->putdata();  // Display data for the object
        delete people[i];      // Clean up the dynamically allocated memory
    }

    return 0;
}
	
