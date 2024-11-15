// THIS -> KEYWORD 

#include <iostream>
using namespace std;

class cricketer {
public:
    string name;   
    int runs;      
    int wickets;   
    float avg;
    
    
        cricketer(string name , int runs , int wickets, float avg){
        this->name = name;
        this->runs = runs;
        this->wickets = wickets;
        this->avg = avg;
    }

    // Method to print cricketer's details
    void print() {
        cout << this->name << " " << this->runs << " " << this->wickets << " " << this->avg << endl;
    }

    // Method to calculate and return the number of matches played also fucntion inside the class
    int matches() {
        return this->runs / this->avg;
    }
};

int main() {
    // Create objects of 'cricketer' class
    cricketer c1("Rohit Sharma", 250000, 10, 47.8);
    cricketer c2("Virat Kohli", 300000, 20, 55.8);

    // Print details of 'c1' and calculate matches played
    c1.print();
    cout << c1.matches() << endl;

    // Print details of 'c2' and calculate matches played
    c2.print();
    cout << c2.matches() << endl;

    return 0;
}