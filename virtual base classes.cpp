#include <iostream> 
using namespace std; 
 
// Base class 
class Person { 
    public: 
    string name;     
    void setName(string n) {         
        name = n; 
    }     
    void displayName() {         
        cout << "Name: " << name << endl; 
    } 
}; 
 
// Derived class 1 (virtual inheritance) 
class Student : virtual public Person { 
    public: 
    void showRole() {         
        cout << "Role: Student" << endl; 
    } 
}; 
 
// Derived class 2 (virtual inheritance) 
class Teacher : virtual public Person { 
    public: 
    void showRole() {         
        cout << "Role: Teacher" << endl; 
    } 
}; 
 
// Derived class from both Student and Teacher 
class TA : public Student, public Teacher { 
    public: 
    void showRole() {         
        cout << "Role: Teaching Assistant (TA)" << endl; 
    } 
};  int main() {     
    TA obj; 
 
    // Only ONE copy of Person is inherited     
    obj.setName("Sravya");     
    obj.displayName(); 
    obj.Student::showRole();     
    obj.Teacher::showRole();     
    obj.showRole(); 
    return 0; 
} 
