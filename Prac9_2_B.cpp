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
Student *ptr = new Student[n];
for (int i =0; i < n; i++)
{

cout << "\nEnter details of Student" << i + 1 << ":\n";

cout << "Enrollment Number: ";

cin >> ptr[i].enrollmentNumber;

cin.ignore();

cout << "Student Name: ";
getline(cin, ptr[i].name);

cout<< "Branch: ";
getline(cin, ptr[i].branch);

cout << "Semester: ";
cin >> ptr[i].semester;

cout << "Percentage: ";
cin >> ptr[i].percentage;

cout << "Grade: ";
cin >> ptr[i].grade;

cout<<"\n======Student Records======\n";

for(int i = 0; i < n; i++)
{
    cout<<"\nStudent " << i + 1 << ":\n";
    cout << "Enrollment Number: " << ptr[i].enrollmentNumber << endl;
    cout << "Student Name: " << ptr[i].name << endl;
    cout << "Branch: " << ptr[i].branch << endl;
    cout << "Semester: " << ptr[i].semester << endl;
    cout << "Percentage: " << ptr[i].percentage << endl;
    cout << "Grade: " << ptr[i].grade << endl;
}
cout<<"\n-----Offset-Based Pointer Traversal-----\n";
Student *current = ptr;
for(int i = 0; i < n; i++)
{
    cout<<"\nStudent " << i + 1 << ":\n";
    cout << "Address:"<<static_cast<void*>(current) << endl;
    cout << "Enrollment Number: " << current->enrollmentNumber << endl;
    cout << "Student Name: " << current->name << endl;
    cout << "Branch: " << current->branch << endl;
    cout << "Semester: " << current->semester << endl;
    cout << "Percentage: " << current->percentage << endl;
    cout << "Grade: " << current->grade << endl;
    current = current + 1;
}
delete[] ptr;
return 0;
}
}