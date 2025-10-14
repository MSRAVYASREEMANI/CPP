#include <iostream> 
#include <deque> 
using namespace std; 
 
int main() { 
    deque<int> dq; 
 
    // Insertion 
    dq.push_back(10);     // insert at end 
    dq.push_back(20); 
    dq.push_front(5);     // insert at front 
    dq.push_front(2); 
 
    cout << "Deque after insertion: "; 
    for (int val : dq) cout << val << " "; 
    cout << endl; 
 
    // Accessing front and back 
    cout << "Front element: " << dq.front() << endl; 
    cout << "Back element: " << dq.back() << endl; 
 
    // Deletion 
    dq.pop_front();  // remove from front 
    dq.pop_back();   // remove from back 
  cout << "Deque after deletion: "; 
    for (int val : dq) cout << val << " "; 
    cout << endl; 
 
    // Traversal using iterator 
    cout << "Deque traversal: "; 
    for (deque<int>::iterator it = dq.begin(); it != dq.end(); 
++it) 
        cout << *it << " "; 
    cout << endl; 
 
    return 0; 
} 
 
