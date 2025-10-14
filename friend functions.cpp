#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Display function
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // Friend functions for unary minus and addition
    friend Complex operator-(const Complex& c);
    friend Complex operator+(const Complex& c1, const Complex& c2);
};

// Unary minus operator
Complex operator-(const Complex& c) {
    return Complex(-c.real, -c.imag);
}

// Addition operator
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4), c2(1, 2);

    cout << "c1: ";
    c1.display();

    cout << "c2: ";
    c2.display();

    Complex c3 = -c1;
    cout << "\nUnary -c1: ";
    c3.display();

    Complex c4 = c1 + c2;
    cout << "c1 + c2: ";
    c4.display();

    return 0;
}