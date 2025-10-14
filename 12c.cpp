#include <iostream> 
#include <map> 
using namespace std; 
 
int main() { 
    // Create a map of string (key) and int (value) 
    map<string, int> studentMarks; 
 
    // Insertion 
    studentMarks.insert(pair<string, int>("Reshma", 85)); 
    studentMarks.insert(pair<string, int>("Kruthika", 90)); 
    studentMarks["Sravya"] = 78;  // alternative way 
 
    cout << "Map after insertion:" << endl; 
    for (auto &entry : studentMarks) { 
        cout << entry.first << " -> " << entry.second << endl; 
    } 
 
    // Accessing value by key 
    cout << "\nMarks of Kruthika: " << 
studentMarks["Kruthika"] << endl; 
 
    // Searching 
    if (studentMarks.find("Reshma") != studentMarks.end()) { 
        cout << "Reshma found in map" << endl; 
} else { 
        cout << "Reshma not found" << endl; 
    } 
 
    // Deletion 
    studentMarks.erase("Sravya");  // remove by key 
    cout << "\nMap after deletion of Sravya:" << endl; 
    for (auto &entry : studentMarks) { 
        cout << entry.first << " -> " << entry.second << endl; 
    } 
 
    return 0; 
}