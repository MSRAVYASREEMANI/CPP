#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base Constructor called" << endl;
    }
    ~Base() {
        cout << "Base Destructor called" << endl;
    }
};

// Derived1 class inherits from Base
class Derived1 : public Base {
public:
    Derived1() {
        cout << "Derived1 Constructor called" << endl;
    }
    ~Derived1() {
        cout << "Derived1 Destructor called" << endl;
    }
};

// Derived2 class inherits from Derived1
class Derived2 : public Derived1 {
public:
    Derived2() {
        cout << "Derived2 Constructor called" << endl;
    }
    ~Derived2() {
        cout << "Derived2 Destructor called" << endl;
    }
};

int main() {
    cout << "Creating object of Derived2..." << endl;
    Derived2 obj;  // Constructors run in order: Base -> Derived1 -> Derived2

    cout << "Exiting main..." << endl;
    return 0;      // Destructors run in reverse order: Derived2 -> Derived1 -> Base
}