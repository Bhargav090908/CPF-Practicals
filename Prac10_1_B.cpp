#include<iostream>
#include<string>
using namespace std;

//Structure for academic information
struct AcademicInfo
{
    int semester;
    float percentage;
    char grade;
};
struct ContactInfo
{
    string emailID;
    string mobileNumber;
};
struct Student
{
    string enrollmentNumber;
    string studentName;
    string branch;
    //Nested structures
    AcademicInfo academic;
    ContactInfo contact;
};
int main()
{
    Student s;
    cout<<"Enter Enrollment Number: "<<endl;
    cin>>s.enrollmentNumber;
    cin.ignore();
    cout<<"Enter Student Name:"<<endl;
    getline(cin, s.studentName);
    cout<<"Enter Branch:"<<endl;
    getline(cin, s.branch);
    cout<<"\n---Academic Information---\n";
    cout<<"Enter Percentage:"<<endl;
    cin>>s.academic.percentage;
    cout<<"Enter Semester:"<<endl;
    cin>>s.academic.semester;
    cout<<"Enter Grade:"<<endl;
    cin>>s.academic.grade;
    cout<<"\n---Contact Information---\n";
    cout<<"Enter Email ID:"<<endl;
    cin>>s.contact.emailID;
    cout<<"Enter Mobile Number:"<<endl;
    cin>>s.contact.mobileNumber;
    cout<<"\n---Display Student Details---\n";
    cout<<"Enrollment Number:"<<s.enrollmentNumber<<endl;
    cout<<"Student Name:"<<s.studentName<<endl;
    cout<<"Branch:"<<s.branch<<endl;
    cout<<"\n---Academic Information---\n";
    cout<<"Percentage:"<<s.academic.percentage<<"%"<<endl;
    cout<<"Semester:"<<s.academic.semester<<endl;
    cout<<"Grade:"<<s.academic.grade<<endl;
    cout<<"\n---Contact Information---\n";
    cout<<"Email ID:"<<s.contact.emailID<<endl;
    cout<<"Mobile Number:"<<s.contact.mobileNumber<<endl;  
}