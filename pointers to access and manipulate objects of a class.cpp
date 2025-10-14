#include <iostream> 
using namespace std; 
 
// Define a simple class 
class Student { 
    private: 
    string name;     
    int age; 
    public: 
    // Constructor 
    Student(string n, int a) {         
        name = n;         
        age = a; 
    } 
 
    // Method to display details     
    void display() {         
        cout << "Name: " << name << ", Age: " << age << endl;     
    } 
 
    // Method to update age     
    void updateAge(int newAge) {         age = newAge; 
    } 
};  int main() { 
    // Create object dynamically using pointer     
    Student *ptr = new Student("Sravya", 20); 
 
    // Access object members using pointer     
    cout << "Initial details:" << endl;     
    ptr->display(); 
 
    // Modify object using pointer     
    ptr->updateAge(18); 
     cout << "After updating age:" << endl;     
     ptr->display(); 
 
    // Free allocated memory     
    delete ptr; 
     return 0; 
}