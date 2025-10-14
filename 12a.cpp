#include <iostream> 
#include <vector> 
#include <list> 
using namespace std; 
 
int main() { 
    // --- VECTOR OPERATIONS --- 
    vector<int> vec; 
 
    // Insertion 
    vec.push_back(10); 
    vec.push_back(20); 
    vec.push_back(30); 
 
    cout << "Vector elements after insertion: "; 
    for (int v : vec) cout << v << " "; 
    cout << endl; 
 
    // Deletion (remove last element) 
    vec.pop_back(); 
 
    cout << "Vector elements after deletion: "; 
    for (int v : vec) cout << v << " ";
    cout << endl; 
 
    // Traversal (using iterator) 
    cout << "Vector traversal: "; 
    for (vector<int>::iterator it = vec.begin(); it != 
vec.end(); ++it) 
        cout << *it << " "; 
    cout << endl << endl; 
 
    // --- LIST OPERATIONS --- 
    list<int> lst; 
 
    // Insertion 
    lst.push_back(100); 
    lst.push_back(200); 
    lst.push_front(50);  // insert at beginning 
 
    cout << "List elements after insertion: "; 
    for (int l : lst) cout << l << " "; 
    cout << endl; 
 
    // Deletion 
    lst.pop_front(); // remove first element 
    lst.pop_back();  // remove last element 
 
    cout << "List elements after deletion: "; 
    for (int l : lst) cout << l << " "; 
    cout << endl; 
 
    // Traversal (using iterator) 
    cout << "List traversal: "; 
    for (list<int>::iterator it = lst.begin(); it != 
lst.end(); ++it) 
        cout << *it << " "; 
    cout << endl; 
 
    return 0; 
}