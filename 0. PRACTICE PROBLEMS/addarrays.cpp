#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;
public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }
    void display() const {
        cout << real << " + " << imag << " i" << endl;
    }

};

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Complex c1(a, b);
    Complex c2(c, d);
    Complex addition = c1 + c2;
    Complex multiplication = c1 * c2;
    addition.display();
    multiplication.display();    
    return 0;
}
