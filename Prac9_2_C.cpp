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

// Function 1: Display all student records
void displayStudents(Student *ptr, int n)
{
    cout << "\n--- Student Records ---\n";

    for (int i = 0; i < n; i++)
    {
        Student *current = ptr + i;

        cout << "\nStudent " << i + 1 << endl;
        cout << "Memory Address: "
             << static_cast<void*>(current) << endl;
        cout << "Enrollment Number: "
             << current->enrollmentNumber << endl;
        cout << "Name: " << current->name << endl;
        cout << "Branch: " << current->branch << endl;
        cout << "Semester: " << current->semester << endl;
        cout << "Percentage: " << current->percentage << "%" << endl;
        cout << "Grade: " << current->grade << endl;
    }
}

// Function 2: Calculate class average percentage
float calculateAverage(Student *ptr, int n)
{
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        total += (ptr + i)->percentage;
    }

    return total / n;
}

// Function 3: Find highest percentage
float findHighest(Student *ptr, int n)
{
    float highest = ptr->percentage;

    for (int i = 1; i < n; i++)
    {
        if ((ptr + i)->percentage > highest)
        {
            highest = (ptr + i)->percentage;
        }
    }

    return highest;
}

// Function 4: Find lowest percentage
float findLowest(Student *ptr, int n)
{
    float lowest = ptr->percentage;

    for (int i = 1; i < n; i++)
    {
        if ((ptr + i)->percentage < lowest)
        {
            lowest = (ptr + i)->percentage;
        }
    }

    return lowest;
}

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of students.";
        return 0;
    }

    // Dynamically allocate student records
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

    // Pass the address of the collection to each function
    displayStudents(ptr, n);

    cout << "\nClass Average Percentage: "
         << calculateAverage(ptr, n) << "%" << endl;

    cout << "Highest Percentage: "
         << findHighest(ptr, n) << "%" << endl;

    cout << "Lowest Percentage: "
         << findLowest(ptr, n) << "%" << endl;

    // Release allocated memory
    delete[] ptr;

    return 0;
}