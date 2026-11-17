#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    
    // Single-level pointer
    int *p1 = &num;

    // Double-level pointer
    int **p2 = &p1;

    // Triple-level pointer
    int ***p3 = &p2;

    cout << "===== MULTI-LEVEL REFERENCING =====\n";

    // Original variable
    cout << "\nOriginal variable:";
    cout << "\nValue of num: " << num;
    cout << "\nAddress of num: "
         << static_cast<void*>(&num) << endl;

    // Single-level referencing
    cout << "\n===== SINGLE-LEVEL POINTER =====\n";
    cout << "Value accessed (*p1): " << *p1 << endl;
    cout << "Address stored in p1: "
         << static_cast<void*>(p1) << endl;
    cout << "Address of pointer p1: "
         << static_cast<void*>(&p1) << endl;

    // Double-level referencing
    cout << "\n===== DOUBLE-LEVEL POINTER =====\n";
    cout << "Value accessed (**p2): " << **p2 << endl;
    cout << "Address stored in p2: "
         << static_cast<void*>(p2) << endl;
    cout << "Address of pointer p2: "
         << static_cast<void*>(&p2) << endl;

    // Triple-level referencing
    cout << "\n===== TRIPLE-LEVEL POINTER =====\n";
    cout << "Value accessed (***p3): " << ***p3 << endl;
    cout << "Address stored in p3: "
         << static_cast<void*>(p3) << endl;
    cout << "Address of pointer p3: "
         << static_cast<void*>(&p3) << endl;

    // Observe access through each level
    cout << "\n===== FINAL ACCESSED VALUE =====\n";
    cout << "*p1 = " << *p1 << endl;
    cout << "**p2 = " << **p2 << endl;
    cout << "***p3 = " << ***p3 << endl;

    return 0;
}