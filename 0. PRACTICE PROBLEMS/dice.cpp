#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dice {
private:
    int* diceValues;  // Pointer to an array of dice values
    int count;        // Number of dice

public:
    // Constructor: Initializes dice with the given count and sets each die to 6
    Dice(int count) {
        this->count = count;
        diceValues = new int[count]; // Dynamically allocate array
        for (int i = 0; i < count; i++) {
            diceValues[i] = 6; // Set each die value to 6 initially
        }
    }

    // Destructor: Cleans up dynamically allocated memory
    ~Dice() {
        delete[] diceValues;
    }

    // Returns the number of dice
    virtual int getCount() const {
        return count;
    }

    // Returns the value of the die at the given 0-based index
    virtual int getValue(int index) const {
        if (index >= 0 && index < count) {
            return diceValues[index];
        }
        return -1; // Invalid index
    }

    // Rolls the die at the given index and sets it to a random value (1-6)
    virtual void roll(int index) {
        if (index >= 0 && index < count) {
            diceValues[index] = rand() % 6 + 1; // Random number between 1 and 6
        }
    }

    // Returns the sum of all dice values
    virtual int total() const {
        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum += diceValues[i];
        }
        return sum;
    }

    // Returns a string representation of the dice values
    virtual string toString() const {
        stringstream ss;
        ss << "{";
        for (int i = 0; i < count; i++) {
            ss << diceValues[i];
            if (i != count - 1) {
                ss << ", ";
            }
        }
        ss << "}";
        return ss.str();
    }

    // Friend function to overload the << operator for printing the dice
    friend ostream& operator <<(ostream& out, Dice& dice) {
        out << dice.toString();
        return out;
    }
};

int main() {
    srand(time(0));  // Seed for random number generation

    // Create a dice object with 5 dice
    Dice dice(5);
    
    // Roll each die
    for (int i = 0; i < dice.getCount(); i++) {
        dice.roll(i);
    }

    // Output the current dice values
    cout << "Dice values: " << dice << endl;

    // Print the total of all dice
    cout << "Total value: " << dice.total() << endl;

    return 0;
}

