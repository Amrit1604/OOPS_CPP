#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable 'x' and assign it a value of 4
    int x = 4;

    // Print the memory address of 'x' using the address-of operator (&)
    cout << &x << endl;

    // Declare a pointer 'p' that stores the address of 'x'
    int* p = &x;

    // Dereference the pointer 'p' to get the value stored at that memory address
    cout << *p << endl;


    *p = 100;  // changing the value of x to 100 via pointer

    cout<<x<<endl; // print the changed value 

    return 0;
}
