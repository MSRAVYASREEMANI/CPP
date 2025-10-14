#include <iostream>
using namespace std;

// Grandparent class
class Grandparent {
public:
    void heritage() {
        cout << "This is Grandparent heritage" << endl;
    }
};

// Parent class inherits from Grandparent
class Parent : public Grandparent {
public:
    void property() {
        cout << "This is Parent property" << endl;
    }
};

// Child class inherits from Parent
class Child : public Parent {
public:
    void own() {
        cout << "This is Child's own feature" << endl;
    }
};

int main() {
    Child obj;

    obj.heritage(); // from Grandparent
    obj.property(); // from Parent
    obj.own();      // from Child

    return 0;
}