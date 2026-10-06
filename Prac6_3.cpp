#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int n, ch;
    int count = 1, pos;
    string erno1, name1, grade1;
    float percent1;

    cout << "\n****************************************************************";
    cout << "\nSTUDENT           RECORD            MANGEMENT           SYSTEM";
    cout << "\n****************************************************************";
    cout << "\nEnter number of students : ";
    cin >> n;
    string erno[n + 10], name[n + 10], grade[n + 10];
    float percent[n + 10];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Enrollment Number of Student " << i + 1 << " :";
        cin >> erno[i];
        cout << "Enter  Name of Student " << i + 1 << " :";
        cin >> name[i];
        cout << "Enter Percentage of Student " << i + 1 << " :";
        cin >> percent[i];
        cout << "Enter Grade of Student " << i + 1 << " :";
        cin >> grade[i];
    }
    cout << "\n---------------------------------------------------------------------";

    do
    {
        cout << "\n1.Display Current Records\n2.Insert New Record\n3.Update Record"
                "\n4.Delete Record\n5.Exit";
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {

        case 1:
            cout << "\n---------------------------------------------------------------------";
            cout << "\nCurrent Records\n\n";
            for (int i = 0; i < n; i++)
            {
                cout << left << setw(10) << erno[i] << setw(10) << name[i] << setw(10) << percent[i] << setw(10) << grade[i];
                cout << "\n";
            }
            cout << "\n---------------------------------------------------------------------";
            break;
        case 2:
            n++;
            cout << "\n---------------------------------------------------------------------";
            cout << "\nInsert New Student";
            cout << "\nYou insert the student at position numbers : ";
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << "\nEnter Position from above :";
            cin >> pos;
            cout << "\nEnter Enrollment Number : ";
            cin >> erno1;
            cout << "\nEnter Name : ";
            cin >> name1;
            cout << "\nEnter Percentge : ";
            cin >> percent1;
            cout << "\nEnter Grade : ";
            cin >> grade1;

            for (int i = n - 1; i >= 0; i--)
            {
                if (pos != i + 1)
                {
                    erno[i + 1] = erno[i];
                    name[i + 1] = name[i];
                    grade[i + 1] = grade[i];
                    percent[i + 1] = percent[i];
                }
                else
                {
                    erno[i + 1] = erno[i];
                    name[i + 1] = name[i];
                    grade[i + 1] = grade[i];
                    percent[i + 1] = percent[i];
                    erno[i] = erno1;
                    name[i] = name1;
                    percent[i] = percent1;
                    grade[i] = grade1;
                    break;
                }
            }
            cout << "\nRecord Inserted Successfully !!!";
            cout << "\n---------------------------------------------------------------------";
            break;
        case 3:
        {
            int c = 0;
            string erno1, grade1;
            float percent1;
            cout << "\n---------------------------------------------------------------------";
            cout << "\nUpdate Student Record";
            cout << "\nEnter Enorllment Number of Student to be Updated : ";
            cin >> erno1;
            for (int i = 0; i < n; i++)
            {
                if (erno[i] == erno1)
                {
                    cout << "Enter New Percentage : ";
                    cin >> percent1;
                    cout << "Enter New Grade : ";
                    cin >> grade1;
                    percent[i] = percent1;
                    grade[i] = grade1;
                    c++;
                    cout << "\nRecord Updated Successfully";
                    cout << "\n---------------------------------------------------------------------";
                    break;
                }
            }
            if (c == 0)
            {
                cout << "Student Not Found !!!";
                cout << "\n---------------------------------------------------------------------";
            }
        }
        break;
        case 4:
        {
            int pos1;
            cout << "\n---------------------------------------------------------------------";
            cout << "\nDelete Student Record";
            cout << "\nEnter Position : ";
            cin >> pos1;
            if (pos1 > n)
            {
                cout << "\nWrong Position !!!";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (i == pos1 - 1)
                    {
                        for (int j = pos1 - 1; j < n; j++)
                        {
                            erno[j] = erno[j + 1];
                            name[j] = name[j + 1];
                            grade[j] = grade[j + 1];
                            percent[j] = percent[j + 1];
                        }
                        cout << "\nRecord Deleted Successfully";
                        cout << "\n---------------------------------------------------------------------";
                        n--;
                        break;
                    }
                }
            }
        }
        break;

        default:
            cout << "Invalid Choice !!!";
            cout << "\n---------------------------------------------------------------------";
            break;
        }
    } while (ch != 5);

    return 0;
}