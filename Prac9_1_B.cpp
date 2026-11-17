#include <iostream>
using namespace std;

int main()
    {
        // Step 1: Declare variables
        int age = 20;
        float marks = 85.5f;
        char grade = 'A';

        // Step 2: Create pointer variables storing addresses
        int *ptrAge = &age;
        float *ptrMarks = &marks;
        char *ptrGrade = &grade;

        cout << "===== Memory Address Explorer =====\n";

        // Step 3: Display values using indirect referencing
        cout << "\n--- Original Values ---\n";

        cout << "Age using pointer: " << *ptrAge << endl;
        cout << "Marks using pointer: " << *ptrMarks << endl;
        cout << "Grade using pointer: " << *ptrGrade << endl;

        // Step 4: Modify values through pointers
        *ptrAge = 21;
        *ptrMarks = 92.5f;
        *ptrGrade = 'B';

        // Step 5: Display updated values
        cout << "\n--- Updated Values ---\n";

        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;

        // Step 6: Display pointer addresses
        cout << "\n--- Memory Addresses ---\n";

        cout << "Address of age: " << ptrAge << endl;
        cout << "Address of marks: " << ptrMarks << endl;
        cout << "Address of grade: " << static_cast<void*>(ptrGrade) << endl;

    return 0;
}