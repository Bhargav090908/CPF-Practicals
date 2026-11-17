#include <iostream>
#include <string>
using namespace std;
int main()
{

    string erno, ename, br, fname, lname,keyword;
    string refid;
    int sppos;
    cout << "\n*********************************************************************************************************";
    cout << "\n             STUDENT                RECORD                    MANAGEMENT             SYSTEM";
    cout << "\n*********************************************************************************************************\n";
    cout << "\nEnter the Enrollment Number : ";
    getline(cin,erno);
    cout << "\nEnter Student Name : ";
    getline(cin,ename);
    cout << "\nEnter Branch : ";
    getline(cin,br);
    
    cout << "\n----------------------------------------------------------------------------------------------------------";
    cout << "\nStudent Reference \n";
    refid = erno + "-" + ename;
    cout << refid << "\n";
    cout << "\n----------------------------------------------------------------------------------------------------------";
    sppos = ename.find(' ');
    if (sppos != std::string::npos) // npos means character/string was not found
    {
          cout<<sppos;
        fname = ename.substr(0, sppos);
        cout << "\nFirst Name";
        cout << "\n"
             << fname;
        lname = ename.substr(sppos + 1);
        cout << "\nLast Name";
        cout << "\n"
             << lname;
    }
    else
    {
        fname = ename;
        cout << "\nFirst Name";
        cout << "\n"
             << fname;
        cout << "\nLast Name";
        cout << "\n"
             << lname;
    }
    cout<<"\nEnter Keyword : ";
    cin>>keyword;
    getline(cin,keyword);
    if (ename.find(keyword)!=std::string::npos)
    {
     cout<<"\nKeyword Found";
    }
    else
    {
     cout<<"\nKeyword Not Found";
    }
    cout << "\n---------------------------------------------------------------------";
    cout<<"\nStudent Report\n";
    cout<<"\nEnrollment Number : ";
    cout<<erno;
    cout<<"\nStudent Name : ";
    cout<<ename;
    cout<<"\nBranch : ";
    cout<<br;


    
}
