#include <iostream> 
using namespace std; 
 
// Template class for a simple pair 
template <typename T> 
class MyPair { 
private: 
    T a, b; 
public: 
    // Constructor 
    MyPair(T first, T second) { 
        a = first; 
        b = second; 
    } 
 
    // Function to get maximum 
    T getMax() { 
        return (a > b) ? a : b; 
    } 
 
    // Function to display values 
    void display() { 
        cout << "Values: " << a << ", " << b << endl; 
    } 
};
int main() { 
    // Pair of integers 
    MyPair<int> intPair(10, 20); 
    intPair.display(); 
    cout << "Max: " << intPair.getMax() << endl << endl; 
 
    // Pair of doubles 
    MyPair<double> doublePair(5.6, 3.4); 
    doublePair.display(); 
    cout << "Max: " << doublePair.getMax() << endl << endl; 
 
    // Pair of characters 
    MyPair<char> charPair('a', 'z'); 
    charPair.display(); 
    cout << "Max: " << charPair.getMax() << endl; 
 
    return 0; 
} 
 
Output