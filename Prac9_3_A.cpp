#include <iostream>
using namespace std;

void analyzeMemory()
{
    // Local variables (automatic storage duration)
    int a = 10;
    float b = 25.5f;
    char c = 'A';

    // Dynamically allocate memory
    int *ptr1 = new int(100);
    float *ptr2 = new float(55.5f);

    cout << "\n======= STACK MEMORY VARIABLES =======\n";

    cout << "\nLocal integer variable:\n";
    cout << "Value: " << a << endl;
    cout << "Address: " << static_cast<void*>(&a) << endl;

    cout << "\nLocal float variable:\n";
    cout << "Value: " << b << endl;
    cout << "Address: " << static_cast<void*>(&b) << endl;

    cout << "\nLocal character variable:\n";
    cout << "Value: " << c << endl;
    cout << "Address: " << static_cast<void*>(&c) << endl;

    cout << "\n======= DYNAMICALLY ALLOCATED MEMORY (HEAP) =======\n";

    cout << "\nDynamic integer:\n";
    cout << "Value: " << *ptr1 << endl;
    cout << "Address: " << static_cast<void*>(ptr1) << endl;

    cout << "\nDynamic float:\n";
    cout << "Value: " << *ptr2 << endl;
    cout << "Address: " << static_cast<void*>(ptr2) << endl;

    cout << "\n======= MEMORY CLASSIFICATION =======\n";

    cout << "a, b and c: Local variables\n"
         << " (Typically stored on the STACK)\n" << endl;

    // Deallocate dynamically allocated memory
    delete ptr1;
    delete ptr2;

    // Reset pointers
    ptr1 = nullptr;
    ptr2 = nullptr;

    cout << "\nDynamic memory released successfully." << endl;
}

int main()
{
    cout << "\n--- MEMORY ORGANIZATION ANALYSIS --- \n";

    analyzeMemory();

    return 0;
}