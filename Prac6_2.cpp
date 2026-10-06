#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int score, hscore, lscore, n, i, j, k, temp1, c = 0;
    string temp2,temp3,pid;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(sc[i]>sc[j])
            {
                temp1=sc[i];
                sc[i]=sc[j];
                sc[j]=temp1;
                temp2=name[i];
                name[i]=name[j];
                name[j]=temp2;
                temp3=id[i];
                id[i]=id[j];
                id[j]=temp2;
            }
        }
    }
    cout << "\n---------------------------------------";
    cout << "\nRanking List";
    cout << "\n---------------------------------------\n";
    cout<<left<<setw(10)<<"Rank"<<setw(15)<<"Name"<<setw(6)<<"Score\n";
    for(i=1;i<=n;i++)
    {
        cout<<left<<setw(10)<<i<<setw(15)<<name[i-1]<<setw(6)<<sc[i-1]<<"\n";
    }
    cout << "\n---------------------------------------";
    cout<<"\nTop Three Performers";
    for(i=0;i<3;i++)
    {
        cout<<"\n"<<left<<setw(10)<<i+1<<setw(15)<<name[i]<<setw(6)<<sc[i];
    }
}
