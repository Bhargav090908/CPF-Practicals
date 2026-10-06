#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int score,hscore,lscore,n,i,j,k,t=0;
    float avg;
    string pname,pid;
    
    cout<<"\n*******************************************************";
    cout<<"\n     SPORTS    EVENT     SCORE     ANALYSIS";
    cout<<"\n*******************************************************";
    cout<<"\nEnter Number of Participants  :";
    cin>>n;
    string id[n],name[n];
    int sc[n];
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter Participant ID   :";
        cin>>id[i];
        cout<<"\nEnter Participant Name :";
        cin>>name[i];
        
        cout<<"\nEnter  Score           :";
        cin>>sc[i];    
    }
    
    for(j=0;j<n;j++)
    {
        lscore=sc[0];
        if(lscore>=sc[j])
        {
            lscore=sc[j];
        }
        hscore=sc[0];
        if(hscore<=sc[j])
        {
            hscore=sc[j];
        }
        t+=sc[j];
    }
    
    cout<<"\n-------------------------------------------------------------";
    cout<<"\n               Participant       Performance";
    cout<<"\n-------------------------------------------------------------\n";
    cout<<left<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(6)<<"Score";
    cout<<"\n-------------------------------------------------------------\n";
    for(k=0;k<n;k++)
    {
        cout<<left<<setw(10)<<id[k]<<setw(15)<<name[k]<<setw(6)<<sc[k]<<endl;
    }
    cout<<"\n-------------------------------------------------------------";
    avg=t/3.0;
    cout<<"\nTotal Score    :"<<t;
    cout<<"\nAverage Score  :"<<avg;
    cout<<"\nHighest Score  :"<<hscore;
    cout<<"\nLowest Score   :"<<lscore;
}