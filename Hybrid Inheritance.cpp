#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showA() {
        cout << "Class A feature" << endl;
    }
};

// Class B inherits from A
class B : virtual public A {  // virtual inheritance to avoid ambiguity
public:
    void showB() {
        cout << "Class B feature" << endl;
    }
};

// Class C inherits from A
class C : virtual public A {  // virtual inheritance to avoid ambiguity
public:
    void showC() {
        cout << "Class C feature" << endl;
    }
};

// Class D inherits from both B and C
class D : public B, public C {
public:
    void showD() {
        cout << "Class D feature" << endl;
    }
};

int main() {
    D obj;

    obj.showB();
    obj.showC();
    obj.showD();

    // Ambiguity resolved due to virtual inheritance
    obj.showA();

    return 0;
}