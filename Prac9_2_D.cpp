#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of students." << endl;
        return 0;
    }

    // Dynamically allocate memory
    int *ptr = new int[n];

    cout << "\nMemory allocated successfully." << endl;

    // Display the allocated memory address
    cout << "Memory address: "
         << static_cast<void*>(ptr) << endl;

    // Deallocate dynamically allocated memory
    delete[] ptr;

    // Reset the pointer
    ptr = nullptr;

    // Display confirmation messages
    cout << "\nMemory deallocated successfully." << endl;

    if (ptr == nullptr) {
        cout << "Pointer reset to nullptr successfully." << endl;
    }

    return 0;
}