#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

class Dice {
private:
    int* diceValues;  // Array to store dice values
    int count;        // Number of dice

public:
    // Constructor to initialize the dice roller
    Dice(int count) : count(count) {
        diceValues = new int[count];
        // Initialize all dice values to 6
        for (int i = 0; i < count; i++) {
            diceValues[i] = 6;
        }
    }

    // Destructor to free dynamically allocated memory
    ~Dice() {
        delete[] diceValues;
    }

    // Function to get the number of dice
    virtual int getCount() const {
        return count;
    }

    // Function to get the value of a die at a specific index
    virtual int getValue(int index) const {
        if (index >= 0 && index < count) {
            return diceValues[index];
        }
        return -1;  // Return -1 for invalid index
    }

    // Function to roll a specific die (random value between 1 and 6)
    virtual void roll(int index) {
        if (index >= 0 && index < count) {
            diceValues[index] = (rand() % 6) + 1;
        }
    }

    // Function to return the total sum of all dice values
    virtual int total() const {
        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum += diceValues[i];
        }
        return sum;
    }

    // Function to return a string representation of the dice values
    virtual string toString() const {
        string result = "{";
        for (int i = 0; i < count; i++) {
            result += to_string(diceValues[i]);
            if (i < count - 1) {
                result += ", ";
            }
        }
        result += "}";
        return result;
    }

    // Overloaded << operator to print the dice values
    friend ostream& operator<<(ostream& out, const Dice& dice) {
        out << dice.toString();
        return out;
    }
};

int main() {
    srand(time(0));  // Seed the random number generator

    int numDice;
    cout << "Enter the number of dice: ";
    cin >> numDice;

    Dice dice(numDice);
    cout << "Initial dice values: " << dice << endl;

    // Roll each die and display the result
    for (int i = 0; i < dice.getCount(); i++) {
        dice.roll(i);
    }

    cout << "After rolling, dice values: " << dice << endl;
    cout << "Total value of dice: " << dice.total() << endl;

    return 0;
}

