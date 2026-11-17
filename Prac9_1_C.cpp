#include <iostream>
using namespace std;

int main()
{
    // Step 1: Declare a one-dimensional array
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "===== Memory Address Explorer =====\n";

    // Step 2: Display elements using array indexing
    cout << "\n--- Using Array Indexing ---\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Index: " << i
             << ", Value: " << numbers[i]
             << ", Address: " << &numbers[i]
             << endl;
    }

    // Step 3: Display elements using address-based access
    cout << "\n--- Using Address-Based Access ---\n";

    int *ptr = numbers;  // Points to the first element

    for (int i = 0; i < 5; i++)
    {
        cout << "Index: " << i
             << ", Value: " << *(ptr + i)
             << ", Address: " << (ptr + i)
             << endl;
    }

    // Step 4: Compare both approaches
    cout << "\n--- Comparison ---\n";

    cout << "First element using indexing: "
         << numbers[0] << endl;

    cout << "First element using pointer: "
         << *ptr << endl;

    return 0;
}