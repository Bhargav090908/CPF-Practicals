#include <iostream>
#include<string>
using namespace std;
struct Student
{
    string erno;
    string name;
    string branch;
    int sem;
    float percent;
    char grade;
};

int main()
{
    Student s;
    cout<<"\nEnter Enrollment Number : ";
    cin>>s.erno;
    cin.ignore();
    cout<<"\nEnter Student Name : ";
    getline(cin,s.name);
    cout<<"\nEnter Branch : ";
    getline(cin,s.branch);
    cout<<"\nEnter Semester : ";
    cin>>s.sem;
    cout<<"\nEnter Percentage : ";
    cin>>s.percent;
    cout<<"\nEnter Grade : ";
    cin>>s.grade;
    cout<<"======STUDENT DETAILS======";
    cout<<"Enrollment Number : "<<s.erno<<endl;
    cout<<"Student Name : "<<s.name<<endl;
    cout<<"Branch : "<<s.branch<<endl;
    cout<<"Semester : "<<s.sem<<endl;
    cout<<"Percentage : "<<s.percent<<endl;
    cout<<"Grade : "<<s.grade<<endl;

}
