// ----------------------------------------------------------------
// OBJECT POINTERS & MANIPULATIONS
// ----------------------------------------------------------------

#include <iostream>
using namespace std;

class cricketer{
    public:
    string name;
    int runs;
    float avg;


    cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
        cout << "Cricketer object created: " << name << endl;
    }

    int  matches(){
        return this->runs / this->avg;
    }
};

int main() {

    cricketer c1("Virat kohli" , 250000, 55.5);
    cricketer c2("Rohit Sharma", 200000, 45.7);
    cricketer c3("Sachin Tendulkar", 400000, 60.0);


    cricketer* p1= &c1;
    cout <<"Name is : "<<(*p1).name<<endl;

    cout <<"Avg is : "<<(*p1).avg<<endl;

    cout<<"Total runs are : "<<(*p1).runs<<endl;

    (*p1).avg = 60;
    cout <<"New Avg is : "<< (*p1).avg<<endl;

    cout<<"Total matches played : "<< (*p1).matches()<<endl;

cout <<"--------------------------------"<<endl;

    cricketer* p2 = & c2;
    cout <<"Name is : "<<(*p2).name<<endl;
    cout <<"Avg is : "<<(*p2).avg<<endl;
    cout<<"Total runs are : "<<(*p2).runs<<endl;
    cout<<"Total matches played : "<<(*p2).matches()<<endl;

cout<<"--------------------------------"<<endl;
    cricketer* p3 = & c3;
    cout <<"Name is : "<<(*p3).name<<endl;
    cout <<"Avg is : "<<(*p3).avg<<endl;
    cout<<"Total runs are : "<<(*p3).runs<<endl;
    cout<<"--------------------------------"<<endl;



    return 0;
}