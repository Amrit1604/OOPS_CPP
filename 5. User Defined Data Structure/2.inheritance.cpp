
// NORMAL / SINGLE INHERITANCE


#include <iostream>
using namespace std;

class scooty{              // PARENT CLASS 
    public:
    int topspeed;
    float milage;
};

class bike :  public scooty{      // DERIVED CLASS OR CHILD CLASS
    public:
    int gears;
    };


int main() {

    bike b1;
    b1.topspeed = 200;
    b1.milage = 50.5;
    b1.gears = 4;

    cout << "Top speed of the bike: " << b1.topspeed << endl;
    cout << "Milage of the bike: " << b1.milage << endl;
    cout << "Number of gears on the bike: " << b1.gears << endl;


    return 0;
}