#include <iostream>
using namespace std;



class CI {
public:
    double principal, rate, time, amount;

    // Constructor to initialize the principal, rate, and time
    CI(double p, double r, double t) {
        principal = p;
        rate = r;
        time = t;
        amount = calculateCI();  // Call the method to calculate the compound interest
    }

    // Function to calculate compound interest manually (without using pow)
    double calculateCI() {
        double amount = principal;
        // Calculate amount using compound interest formula manually
        for (int i = 0; i < time; i++) {
            amount = amount * (1 + rate / 100);  // Multiply by (1 + rate/100) for each year
        }
        return amount;
    }
};



int main() {
    double principal, rate;
    int time;

    // Taking input from the user
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;

    // Create an object of the CI class
    CI ci(principal, rate, time);

    // Display the result
    cout << "The amount after " << time << " years is: " << ci.amount << endl;

    return 0;
}

