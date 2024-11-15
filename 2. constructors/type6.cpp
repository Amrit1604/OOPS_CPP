#include <iostream>
using namespace std;

class cricketer {
public:
    string name;   
    int runs;      
    int wickets;   

    // Parameterized constructor
    cricketer(string Name, int Runs, int Wickets) {
        name = Name;      
        runs = Runs;        
        wickets = Wickets;  
    }
};

int main() {
   
    cricketer c1("Rohit Sharma", 250, 10);

    cricketer c2("Virat Kohli", 300, 20);
    
    cout << c1.name << " " << c1.runs << " " << c1.wickets << endl;

    cout << c2.name << " " << c2.runs << " " << c2.wickets << endl;

    return 0;
}
