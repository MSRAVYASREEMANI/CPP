#include <iostream> 
using namespace std; 
 
int main() { 
    int a, b; 
    cout << "Enter two numbers (a b): "; 
    cin >> a >> b; 
 
    try { 
        if (b == 0) { 
            throw runtime_error("Division by zero is not 
allowed!"); 
        } 
        cout << "Result of division: " << (a / b) << endl; 
    } 
    catch (runtime_error &e) { 
        cout << "Exception caught: " << e.what() << endl; 
    } 
 
    cout << "Program continues after exception handling..." << 
endl; 
    return 0; 
}