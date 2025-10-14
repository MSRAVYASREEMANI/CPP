#include <iostream> 
using namespace std; 
class Parent { 
    public: 
    void commonFeature() {         
        cout << "Common feature from Parent" << endl; 
    } 
}; 
class Child1 : public Parent { 
    public: 
    void feature1() {         
        cout << "Feature of Child1" << endl; 
    } 
};  
class Child2 : public Parent { 
    public: 
    void feature2() {         
        cout << "Feature of Child2" << endl; 
    } 
};  
int main() {     
    Child1 c1;     
    c1.commonFeature();     
    c1.feature1();  
    Child2 c2;     
    c2.commonFeature();     
    c2.feature2(); 
    return 0; 
} 