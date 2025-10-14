#include <iostream> 
using namespace std; 
 
// Function template to find maximum of two values 
template <typename T> 
T getMax(T a, T b) { 
    return (a > b) ? a : b; 
} 
 
// Function template to swap two values 
template <typename T> 
void mySwap(T &x, T &y) { 
    T temp = x; 
    x = y; 
    y = temp; 
} 
 
int main() { 
    // Using getMax with int 
    cout << "Max of 10 and 20 is: " << getMax(10, 20) << endl; 
 
    // Using getMax with double 
 cout << "Max of 5.5 and 3.2 is: " << getMax(5.5, 3.2) << 
endl; 
 
    // Using getMax with char 
    cout << "Max of 'a' and 'z' is: " << getMax('a', 'z') << 
endl; 
 
    // Demonstrating swap 
    int x = 100, y = 200; 
    cout << "Before swap: x = " << x << ", y = " << y << endl; 
    mySwap(x, y); 
    cout << "After swap: x = " << x << ", y = " << y << endl; 
 
    return 0; 
}