#include <iostream> 
using namespace std; 
 
// Base class 
class Animal { 
public: 
    // Virtual function 
    virtual void sound() { 
        cout << "Animal makes a sound" << endl; 
    } 
}; 
 
// Derived class 1 
class Dog : public Animal { 
public: 
    void sound() override { 
        cout << "Dog barks" << endl; 
    } 
}; 
// Derived class 2 
class Cat : public Animal { 
public: 
    void sound() override { 
        cout << "Cat meows" << endl; 
    } 
}; 
 
int main() { 
    // Base class pointer 
    Animal* ptr; 
 
    Dog d; 
    Cat c; 
 
    // Pointing to Dog object 
    ptr = &d; 
    ptr->sound();   // Calls Dog::sound() at runtime 
 
    // Pointing to Cat object 
    ptr = &c; 
    ptr->sound();   // Calls Cat::sound() at runtime 
 
    return 0; 
} 