#include <iostream>
using namespace std;

// Base class 1
class Cricketer {
public:
    int runs;
    int wickets;
    float avg;

    void displayCricketerDetails() {
        cout << "Runs: " << runs << endl;
        cout << "Wickets: " << wickets << endl;
        cout << "Batting Average: " << avg << endl;
    }
};

// Base class 2
class Engineer {
public:
    int experience;
    string domain;

    void displayEngineerDetails() {
        cout << "Experience: " << experience << " years" << endl;
        cout << "Domain: " << domain << endl;
    }
};

// Derived class using multiple inheritance
class Phodu : public Engineer, public Cricketer {
public:
    string name;

    void displayDetails() {
        cout << "Name: " << name << endl;
        displayEngineerDetails();
        displayCricketerDetails();
    }
};

int main() {
    // Creating an object of the derived class
    Phodu p;

    // Setting values for the object
    p.name = "Amrit";
    p.experience = 5;
    p.domain = "Software Engineering";
    p.runs = 4500;
    p.wickets = 150;
    p.avg = 45.5;

    // Displaying the details
    cout << "Phodu's Details:" << endl;
    p.displayDetails();

    return 0;
}
