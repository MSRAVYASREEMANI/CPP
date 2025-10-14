#include <iostream> 
using namespace std; 
class Father { 
    public: 
    void quality() {         
        cout << "Quality from Father" << endl; 
    } 
};  
class Mother { 
    public: 
    void skill() {         
        cout << "Skill from Mother" << endl; 
    } 
};  
class Child : public Father, public Mother { 
    public: 
    void own() {         
        cout << "Own feature of Child" << endl; 
    } 
};  
int main() {     
    Child obj;     
    obj.quality(); // from Father     
    obj.skill();   // from Mother     
    obj.own();     // from Child     
    return 0;
} 