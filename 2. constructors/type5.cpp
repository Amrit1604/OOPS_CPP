#include <iostream>  // Standard input-output stream library
using namespace std;

class Restaurant {
public:
    string name;      // Name of the restaurant
    string cuisine;   // Type of cuisine the restaurant serves
    int tablenum;     // Number of tables in the restaurant
    int food;         // Amount of food in the restaurant (just a placeholder for this example)






    // Parameterized constructor to initialize the restaurant object with provided values
    Restaurant(string n, string c, int t, int f) {
        name = n;
        cuisine = c;
        tablenum = t;
        food = f;
    }




    // Default constructor (no arguments, empty body in this case)
    Restaurant() {
        // Optionally, we could set default values here (e.g., name = "Unknown", cuisine = "Unknown", etc.)
    }




    // Copy constructor (implicitly used in this case for 'r3 = r1')
    // This constructor would be needed for a deep copy if we had dynamic memory, which isn't the case here.
    // For now, the default copy mechanism is sufficient for this example.
};

int main() {
    // Create a 'Restaurant' object 'r1' using the parameterized constructor
    Restaurant r1("Pizza Hut", "Italian", 101, 50);




    // Create another 'Restaurant' object 'r2' and manually set its properties
    Restaurant r2;
    r2.name = "KFC";      // Set the name to "KFC"
    r2.cuisine = "American";  // Set the cuisine to "American"
    r2.tablenum = 50;     // Set the number of tables to 50
    r2.food = 20;         // Set the amount of food to 20




    // Create 'r3' as a copy of 'r1' (copy constructor is called here)
    // This will copy the state of 'r1' into 'r3'
    Restaurant r3 = r1;

    // Now, change 'r3.name' to "LaPinoz". This does not affect 'r1', as the copy was made.
    r3.name = "LaPinoz";  // Modify the name of 'r3' only



    Restaurant r4(r2);  // Copy Constrcutor
    r4.name = "McDonald's";  // DEEP COPY





    // Output the details of each restaurant object:
    cout << r1.name << "\n" << r1.cuisine << "\n" << r1.tablenum << "\n" << r1.food << endl;
    cout << "****************************************************************************************" << endl;
    cout << r2.name << "\n" << r2.cuisine << "\n" << r2.tablenum << "\n" << r2.food << endl;
    cout << "****************************************************************************************" << endl;
    cout << r3.name << "\n" << r3.cuisine << "\n" << r3.tablenum << "\n" << r3.food << endl;
    cout << "****************************************************************************************" << endl;
    cout << r4.name << "\n" << r4.cuisine << "\n" << r4.tablenum << "\n" << r4.food << endl;

    return 0;  // Program ends successfully
}



// Copy Constructor:

// In this code, when you do Restaurant r3 = r1;, C++ uses a shallow copy constructor (the default one), which simply copies the values of the fields from r1 to r3. However, if you had dynamically allocated memory (e.g., using pointers), you would need to implement a deep copy constructor to ensure the objects do not share the same memory.


// Shallow Copy:

// A shallow copy simply copies the values of member variables. If the class contains pointers or dynamic memory (e.g., new), a shallow copy could cause issues because both objects would point to the same memory. However, since there are no pointers or dynamic memory in this example, the default copy constructor works fine and performs a shallow copy. In this case, shallow copy is sufficient.



// Deep Copy:

// In general, a deep copy would be needed if the class contains pointers or dynamically allocated memory. It ensures that the objects created from copying another object are independent and do not share references to the same data. For this case, since the class only has basic types (strings and integers), a deep copy is unnecessary.