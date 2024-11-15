// PRINT ALL THE DETAILS OF A GIVEN OBJECT

#include <iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    string address;
    int number;

    // Constructor
    person(string name, int age, string address, int number){
        this->name = name;
        this->age = age;
        this->address = address;
        this->number = number;
    }

    // Function to print all details
    void print(){
                                                                //  CREATED A FUNCTION INSIDE A CLASS TO PRINT THE PROVIDED DATA IN ONE ROUND WITHOUT ADDING THE ' COUT' AT 
                                                                 //   THE END OF THE AFTER EVERY FUNCTION
        cout<<"*************************************"<<endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Number: " << number << endl;
        cout<<"*************************************"<<endl;
    }
};

int main() {
    person p1("Amrit", 20, "India", 9501580144);
    person p2("Joshi", 19, "London", 9876543210);
    person p3 ("Pranjal", 15 , "Japan", 7499387600);
    
    p1.print();
    p2.print();
    p3.print();

    return 0;
}