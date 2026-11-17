#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string enrollmentNumber;
    string name;
    string branch;
    int semester;
    float percentage;
    char grade;
};

int main()
{
    int n;

    cout << "Enter number of students to be registered: ";
    cin >> n;

    // Dynamically allocate memory for n students
    Student *ptr = new Student[n];

    // Accept student details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << ":\n";

        cout << "Enrollment Number: ";
        cin >> ptr[i].enrollmentNumber;

        cin.ignore();

        cout << "Student Name: ";
        getline(cin, ptr[i].name);

        cout << "Branch: ";
        getline(cin, ptr[i].branch);

        cout << "Semester: ";
        cin >> ptr[i].semester;

        cout << "Percentage: ";
        cin >> ptr[i].percentage;

        cout << "Grade: ";
        cin >> ptr[i].grade;
    }

    // Display all student records
    cout << "\n========== STUDENT RECORDS ==========\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Enrollment Number: "
             << ptr[i].enrollmentNumber << endl;
        cout << "Student Name: " << ptr[i].name << endl;
        cout << "Branch: " << ptr[i].branch << endl;
        cout << "Semester: " << ptr[i].semester << endl;
        cout << "Percentage: " << ptr[i].percentage << "%" << endl;
        cout << "Grade: " << ptr[i].grade << endl;
    }

    // Release dynamically allocated memory
    delete[] ptr;

    return 0;
}