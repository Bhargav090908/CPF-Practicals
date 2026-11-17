#include <iostream>
#include <cstring>
using namespace std;
void displayHeader(void);
void acceptStudentDetails(void);
void calculateAcademicResult(int arr[]);

int main()
{
    displayHeader();

    acceptStudentDetails();
    cout<<"\n----------------------------------------------------";
    cout<<"\nProgrm Executed Successfully Using User-Defined Functions.";
    cout<<"\n----------------------------------------------------";
}
void displayHeader()
{
    cout<<"\n************************************************************";
    cout<<"\n   STUDENT     RECORD      MANAGEMENT    SYSTEM";
    cout<<"\n************************************************************";
}
void acceptStudentDetails()
{
    char erno[10],name[20],br[10];
    int sem,marks[5];
    cout<<"\n-------------Student Registration----------------";
    cout<<"\nEnter Enrollment Number : ";
    cin>>erno;
    cout<<"\nEnter Student Name : ";
    cin>>name;
    cout<<"\nEnter Branch : ";
    cin>>br;
    cout<<"\nEnter Semester : ";
    cin>>sem;
    cout<<"\nEnter Marks";
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"\nSubject "<<i+1<<" : ";
        cin>>marks[i];
    }
    cout<<"\n----------------------------------------------------";
    cout<<"\nAcedemic Report";
    cout<<"\n----------------------------------------------------";
    cout<<"\nEnrollment Number : "<<erno;
    cout<<"\nStudent Name : "<<name;
    cout<<"\nBranch : "<<br;
    cout<<"\nSemester : "<<sem;
    calculateAcademicResult(marks);
}
void calculateAcademicResult(int arr[])
{
    
    int total=0;
    float percent;
    for (int i = 0; i < 5; i++)
    {
        total+=arr[i];
    }
    percent=(total/5.0);
    cout<<"\nTotal Marks : "<<total;
    cout<<"\nPercentage : "<<percent<<"%";
    if (total<40)
    {
        cout<<"Result : Fail";
    }
    else
    {
        if (percent>95)
        {
            cout<<"\nGrade : O";
            cout<<"\nResult : Pass";
        }
        else if (percent<=95 && percent>=90)
        {
            cout<<"\nGrade : A+";
            cout<<"\nResult : Pass";
        }
        else if (percent<90 && percent>=80)
        {
            cout<<"\nGrade : A";
            cout<<"\nResult : Pass";
        }
        else if (percent<80 && percent>=70)
        {
            cout<<"\nGrade : B+";
            cout<<"\nResult : Pass";
        }
        else if (percent<70 && percent>=60)
        {
            cout<<"\nGrade : B";
            cout<<"\nResult : Pass";
        }
        else if (percent<60 && percent>=50)
        {
            cout<<"\nGrade : C";
            cout<<"\nResult : Pass";
        }
        else if (percent<50 && percent>=40)
        {
            cout<<"\nGrade : D";
            cout<<"\nResult : Pass";
        }
    }

}