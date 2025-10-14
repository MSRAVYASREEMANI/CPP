#include <iostream> 
using namespace std; 
 
// Base class 
class Shape { 
public: 
    // Virtual function 
    virtual void draw() { 
        cout << "Drawing a generic shape" << endl; 
    } 
}; 
 
// Derived class 1 
class Circle : public Shape { 
public: 
    void draw() override {   // override is optional but good 
practice 
        cout << "Drawing a Circle" << endl; 
    } 
}; 
 
// Derived class 2 
class Rectangle : public Shape { 
public: 
    void draw() override { 
 
Programming with C++ Lab                                                                                     Page No.:                   
        cout << "Drawing a Rectangle" << endl; 
    } 
}; 
 
int main() { 
    // Base class pointer 
    Shape* shapePtr; 
 
    // Pointing to Circle object 
    Circle c; 
    shapePtr = &c; 
    shapePtr->draw();   // Calls Circle::draw() at runtime 
 
    // Pointing to Rectangle object 
    Rectangle r; 
    shapePtr = &r; 
    shapePtr->draw();   // Calls Rectangle::draw() at runtime 
 
    // Base object 
    Shape s; 
    shapePtr = &s; 
    shapePtr->draw();   // Calls Shape::draw() 
 
    return 0; 
}