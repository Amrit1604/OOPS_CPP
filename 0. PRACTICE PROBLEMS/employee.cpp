#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& name, int age) : name(name), age(age) {}

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Employee : public Person {
private:
    int employeeId;
    double salary;

public:
    Employee(const string& name, int age, int employeeId, double salary)
        : Person(name, age), employeeId(employeeId), salary(salary) {}

    void display() {
        Person::display();
        cout << "Employee ID: " << employeeId << "\n";
        cout << "Salary: " << salary << "\n";
    }
};

int main() {
    string name;
    int age, employeeId;
    double salary;

    cin >> name >> age >> employeeId >> salary;

    Employee employee(name, age, employeeId, salary);
    employee.display();

    return 0;
}

