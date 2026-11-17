#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
    char text[10000];
    int tchar = 0, twords = 1, talpha = 0, tdigits = 0, tspchar = 0;
    int i;
    cout << "\n*********************************************************************************************************";
    cout << "\n             DOCUMENT                TEXT             ANALYZER";
    cout << "\n*********************************************************************************************************\n";
    cout << "\nEnter a paragraph : \n";
    cin.getline(text, 10000);
    tchar = strlen(text);
    for (int i = 0; text[i] != '\0'; i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') ||
            (text[i] >= 'a' && text[i] <= 'z'))
        {
            talpha++;
        }
        else if (text[i] >= '0' && text[i] <= '9')
        {
            tdigits++;
        }
        else if (text[i] == ' ')
        {
            twords++;
        }
        else if (text[i] == '\t')
        {
        }
        else
        {
            tspchar++;
        }
    }
    cout << "\n---------------------------------------------------";
    cout << "\n             Text Analysis";
    cout << "\n---------------------------------------------------\n";
    cout<<"Characters : "<<tchar;
    cout<<"Words : "<<twords;
    cout<<"Alphabets : "<<talpha;
    cout<<"Digits : "<<tdigits;
    cout<<"Special Characters : "<<tspchar;

}