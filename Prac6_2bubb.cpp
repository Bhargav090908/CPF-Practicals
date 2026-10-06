#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int score, hscore, lscore, n, i, j, k, temp1, c = 0;
    string temp2, temp3, pid;
    cout << "\n*******************************************************";
    cout << "\n     SPORTS    EVENT     SCORE     ANALYSIS";
    cout << "\n*******************************************************";
    cout << "\nEnter Number of Participants  :";
    cin >> n;
    string id[n], name[n];
    int sc[n], sc1[n];
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter Participant ID   :";
        cin >> id[i];
        cout << "\nEnter Participant Name :";
        cin >> name[i];

        cout << "\nEnter  Score           :";
        cin >> sc[i];
    }

    for (j = 0; j < n; j++)
    {
        lscore = sc[0];
        if (lscore >= sc[j])
        {
            lscore = sc[j];
        }
        hscore = sc[0];
        if (hscore <= sc[j])
        {
            hscore = sc[j];
        }
    }
    cout << "\nSearch Participant";
    cout << "\nEnter Participant ID  :";
    cin >> pid;
    for (k = 0; k < n; k++)
    {
        if (id[k] == pid)
        {
            cout << "\n---------------------------------------";
            cout << "\nParticipant Found";
            cout << "\n---------------------------------------";
            cout << "\nID       :" << id[k];
            cout << "\nName     :" << name[k];
            cout << "\nScore    :" << sc[k];
            c++;
        }
    }
    if (c == 0)
    {
        cout << "\nNo Student Found !!!!!";
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (sc[j] < sc[j + 1])
            {
                temp1 = sc[j];
                sc[j] = sc[j + 1];
                sc[j + 1] = temp1;
                temp2 = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp2;
                temp3 = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp2;
            }
        }
    }
    cout << "\n---------------------------------------";
    cout << "\nRanking List";
    cout << "\n---------------------------------------\n";
    cout << left << setw(10) << "Rank" << setw(15) << "Name" << setw(6) << "Score\n";
    for (i = 1; i <= n; i++)
    {
        cout << left << setw(10) << i << setw(15) << name[i - 1] << setw(6) << sc[i - 1] << "\n";
    }
    cout << "\n---------------------------------------";
    cout << "\nTop Three Performers";
    cout << "\n---------------------------------------";
    for (i = 0; i < 3; i++)
    {
        cout << "\n"
             << left << setw(10) << i + 1 << setw(15) << name[i] << setw(6) << sc[i];
    }
}
