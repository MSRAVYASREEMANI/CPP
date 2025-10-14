#include <iostream> 
#include <string> 
using namespace std; 
 
int main() { 
    try { 
        int choice; 
        cout << "Enter 1 for int exception, 2 for double 
exception, 3 for string exception: "; 
        cin >> choice; 
 
        if (choice == 1) 
            throw 100;              // int exception 
        else if (choice == 2) 
            throw 99.99;            // double exception 
        else if (choice == 3) 
            throw string("Error!"); // string exception 
        else 
            throw 'X';              // char exception (unhandled specifically) 
    } 
    catch (int e) { 
        cout << "Caught an integer exception: " << e << endl; 
    } 
    catch (double e) { 
        cout << "Caught a double exception: " << e << endl; 
    } 
    catch (string &e) { 
        cout << "Caught a string exception: " << e << endl; 
    }
     
                 
    catch (...) { 
        cout << "Caught an unknown exception!" << endl; 
    } 
 
    cout << "Program continues after exception handling..." << 
endl; 
    return 0; 
}