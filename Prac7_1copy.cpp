#include <iostream>
#include <string>
using namespace std;
int main()
{

    string erno, ename, br, fname, lname;
    string refid;
    int sppos;
    cout << "\n*********************************************************************************************************";
    cout << "\n             STUDENT                RECORD                    MANAGEMENT             SYSTEM";
    cout << "\n*********************************************************************************************************\n";
    cout << "\nEnter the Enrollment Number : ";
    cin >> erno;
    cout << "\nEnter Branch : ";
    cin >> br;
    cout << "\nEnter Student Name : ";
    cin >> ename;
    cout << "\n----------------------------------------------------------------------------------------------------------";
    cout << "\nStudent Reference \n";
    refid = erno + "-" + ename;
    cout << refid << "\n";
    cout << "\n----------------------------------------------------------------------------------------------------------";
    sppos = ename.find(" ");
    if (sppos != string::npos) // npos means character/string was not found
    {
        lname = ename.substr(sppos + 1);
        cout << "\nLast Name";
        cout << lname;
        fname = ename.substr(0, sppos);
        cout << "\nFirst Name";
        cout << "\n"
             << fname;
        
    }
    else
    {
        fname = ename;
        cout << "\nFirst Name";
        cout << "\n"
             << fname;
        lname = "";
        cout << "\nLast Name";
        cout << "\n"
             << lname;
             cout<<"Else is exe";
    }
}
