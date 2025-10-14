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

    // Unary minus operator
    Complex operator-() const {
        return Complex(-real, -imag);
    }

    // Addition operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
};

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