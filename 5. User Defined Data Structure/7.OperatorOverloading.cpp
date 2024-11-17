#include <iostream>
using namespace std;

// Function to find the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

class Fraction {
public:
    int num;
    int den;

    // Constructor to initialize numerator and denominator
    Fraction(int num, int den) {
        this->num = num;
        this->den = den;
    }

    // Function to display the fraction
    void display() {
        cout << num << " / " << den << endl;
    }

    // Overloading the + operator for adding two fractions
    Fraction operator+(Fraction f) {
        int newNum = this->num * f.den + f.num * this->den;
        int newDen = this->den * f.den;
        Fraction ans(newNum, newDen);
        return ans;
    }

    // Function to simplify the fraction
    void simplify() {
        int g = gcd(num, den);
        num /= g;
        den /= g;
        // If the denominator is negative, make it positive
        if (den < 0) {
            num = -num;
            den = -den;
        }
    }
};

int main() {
    Fraction f1(1, 2); // Represents 1/2
    Fraction f2(1, 4); // Represents 1/4

    f1.display();
    f2.display();

    // Using the overloaded + operator to add fractions
    Fraction f3 = f1 + f2;

    // Display the non-simplified fraction
    cout << "Non-simplified result: ";
    f3.display();

    // Simplify the fraction and display it again
    f3.simplify();
    cout << "Simplified result: ";
    f3.display();

    return 0;
}

