#include <iostream>
using namespace std;

class vehicle{              // PARENT CLASS 
    public:
    int topspeed;
    float milage;
    string fuel;
};

class car :  public vehicle{      // DERIVED CLASS OR CHILD CLASS
    public:
    bool sunroof;
    int doors;
    int seats;


    };


class truck :  public vehicle{      // DERIVED CLASS OR CHILD CLASS
    public:
    

    };

class bike :  public vehicle{      // DERIVED CLASS OR CHILD CLASS
    public:

    };


int main() {

    car c1;
    c1.topspeed = 200;
    c1.milage = 50.5;


    return 0;
}