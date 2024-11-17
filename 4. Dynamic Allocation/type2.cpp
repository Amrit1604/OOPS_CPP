#include <iostream>
using namespace std;

class cricket{
    public:
    string name;
    int runs;
    float avg;

    cricket(string name , int runs , float avg){
        this->name= name;
        this->runs= runs;
        this->avg= avg;
    }

};

int main() {

    cricket c1("Amrit Joshi",  200, 50);  // Object allocation normally

    cricket* c2 = new cricket("Pranjal Joshi", 100, 30);  // Dynamic allocation



        cout<<"Player Details: "<<c1.name<<", "<<c1.runs<<", "<<c1.avg<<endl;
        cout<<"Player Details: "<<(*c2).name<<", "<<(*c2).runs<<", "<<(*c2).avg<<endl;


    return 0;
}