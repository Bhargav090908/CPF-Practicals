#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ch, sem, mm, pm, cpfm, t = 0, n,c,j;
    double avg = 0.0;
    string ebr, mob, erno, ename;
    int sub[n];
    do
    {
        cout << "\n*******************************************************************************************";
        cout << "\nSTUDENT               RECORD            MANAGEMENT                   SYSTEM\n";
        cout << "*******************************************************************************************\n";
        cout << "----------------------------------MAIN   MENU-----------------------------------------------\n";
        cout << "1.Register New Student\n2.Display Student Record\n3.Enter Students Marks\n4.Display Academic Results\n5.Exit\n";
        cout << "Enter Your Choice :";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter Enrollment Number:";
            cin >> erno;
            cout << "\nEnter Student Name     :";
            cin >> ename;
            cout << "\nEnter Branch           :";
            cin >> ebr;
            cout << "\nEnter Semester         :";
            cin >> sem;
            cout << "\nEnter Mobile Number    :";
            cin >> mob;
            cout << "\nStudent Registered Successfully.";
            cout << "\n-----------------------------------------------------------------------------------------------";
            break;
        case 2:
            cout << "\n------------------------------------------------------------------------------------------------";
            cout << "\nSTUDENT REGISTRATION DETAILS";
            cout << "\n-----------------------------------------------------------------------------------------------";
            cout << "\nEnrollment Number      :      " << erno;
            cout << "\nStudent Name           :      " << ename;
            cout << "\nBranch                 :      " << ebr;
            cout << "\nSemester               :      " << sem;
            cout << "\nMobile Number          :      " << mob;
            break;
        case 3:
            cout << "\nEnter number of subjects :";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Enter Marks of Subject " << i + 1 << ":";
                cin >> sub[i];
            }
            break;
        case 4:
            cout << "\n-----------------------------------------------------------------------------------------------------";
            cout << "\n ACADEMIC        RESULT";
            cout << "\n-----------------------------------------------------------------------------------------------------";
            for (int i = 0; i < n; i++)
            {
                t = t + sub[i];
            }
            avg = t / n;
            cout << "\nTotal Marks:" << t;
            cout << "\nAverage Marks:" << avg;
            cout << "\nPercentage:" << avg;
            for(j=0;j<n;j++)
            {
                if (sub[j]>40)
                c+=1;
            }
            if(c==n)
            {
                cout << "\nResult :Pass";
                if (avg >= 95)
                {
                    cout << "\nGrade:                 :O";
                }
                else if (avg < 95 && avg >= 90)
                {
                    cout << "\nGrade                 :A+";
                }
                else if (avg < 90 && avg >= 80)
                {
                    cout << "\nGrade                 :A";
                }
                else if (avg < 80 && avg >= 70)
                {
                    cout << "\nGrade                 :B";
                }
                else if (avg < 70 && avg >= 60)
                {
                    cout << "\nGrade                 :B+";
                }
                else if (avg < 60 && avg >= 50)
                {
                    cout << "\nGrade                 :C";
                }
            }
            else
            {
                cout << "\nResult                     :Fail";
            }
            cout << "\n-----------------------------------------------------------------------------------------------------";
            break;
        }

    } while (ch!= 5);
    return 0;
}
