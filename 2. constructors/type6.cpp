// THIS -> KEYWORD 

#include <iostream>
using namespace std;

class cricketer {
public:
    string name;   
    int runs;      
    int wickets;   

    // Parameterized constructor

        // Parameterized constructor
    // cricketer(string name, int runs, int wickets) {              // IF DONE LIKE THIS IT'LL ONLY GIVE GARBAGE VALUE 
    //     name = name;      
    //     runs = runs;        
    //     wickets = wickets;  
    // }

    // cricketer(string Name, int Runs, int Wickets) {                 // IF DONE LIKE THIS THEN IT'LL WORK PERFECTLY
    //     name = Name;      
    //     runs = Runs;        
    //     wickets = Wickets;  
    // }
    

// IF WANT TO MAKE VARIABLE NAMES = PUBLIC DECLARED NAMES
    cricketer(string name , int runs , int wickets){
        this->name = name;
        this->runs = runs;
        this->wickets = wickets;
    }
};

int main() {
   
    cricketer c1("Rohit Sharma", 250, 10);

    cricketer c2("Virat Kohli", 300, 20);
    
    cout << c1.name << " " << c1.runs << " " << c1.wickets << endl;

    cout << c2.name << " " << c2.runs << " " << c2.wickets << endl;

    return 0;
}
