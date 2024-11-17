#include <iostream>
using namespace std;

int main() {
    

    int x = 12;
    cout<<x<<endl;

    // Declare a pointer variable
    int* ptr = &x;            //  Static allocation
    cout<<*ptr<<endl;

    int *ptr = new int(13);     // Dynamic Allocation -- without creating objects to store info 
    cout<<*ptr<<endl;


    return 0;
}