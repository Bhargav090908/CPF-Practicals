#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
/*{
    char sent[2000];
    cout << "\nEnter Paragraph : ";
    cin.getline(sent, 2000);
    int len = strlen(sent);
    cout << "\nReverse Sentence : ";
    for (int i = len - 1; i >= 0; i--)
    {
        cout << sent[i];
    }
}*/
{
    char sent[2000],rev[2000];
    
    cout << "\nEnter Paragraph : ";
    cin.getline(sent, 2000);
    int len = strlen(sent),temp=len-1,k=0;
    cout << "Reverse Sentence : ";
    for (int i = len - 1; i >= 0; i--)
    {
        if (sent[i]!=' ')
        { 
            k++;
        }
        else
        {
            for (int j = temp; j < temp ; j++)
            {
                cout<<sent[j];
            }
            temp=k;
        }
    }
    
}