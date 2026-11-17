#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
    char sent[2000];
    char uppercase[2000];
    char lowercase[2000];
    cout<<"Enter The Paragraph : ";
    cin.getline(sent,2000);
    int i=0;
    while (sent[i]!='\0')
    {
        if (sent[i]>='a' && sent[i]<='z')
        {
            uppercase[i]=sent[i] - 32;
        }
        else
        {
            uppercase[i]=sent[i];
        }
        if (sent[i]>='A' && sent[i]<='Z')
        {
            lowercase[i]=sent[i] + 32;
        }
        else
        {
            lowercase[i]=sent[i];
        }
        i++;
    }
    uppercase[i]='\0';
    lowercase[i]='\0';
    cout<<"\nUppercase : "<<uppercase;
    cout<<"\nLowercase : "<<lowercase;
}