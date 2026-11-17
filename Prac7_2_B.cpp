#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main(){
    char text[1000];
    char firstw[100];
    char lastw[100];
    int len;
    int i,j;
    cout<<"Enter a paragraph : ";
    cin.getline(text,1000);
    len=strlen(text);
    i=0;
    j=0;
    while (text[i]!=' ' && text[i]!='\0')
    {
        firstw[j]=text[i];
        i++;
        j++;
    }
    firstw[j]='\0';
    i=len-1;
    while (i>=0 && text[i]!=' ' && text[i]!='\0')
    {
        i--;
    }
    i++;
    j=0;
    while (text[i]!=' ' && text[i]!='\0')
    {
        lastw[j]=text[i];
        i++;
        j++;
    }
    lastw[j]='\0';
    cout << "\n---------------------------------------------------";
    cout << "\n    String Extraction";
    cout << "\n---------------------------------------------------\n";
    cout<<"First Word : "<<firstw<<endl;
    cout<<"Last Word : "<<lastw<<endl;
    cout<<"First Character : "<<text[0]<<endl;
    cout<<"Last Character : "<<text[len-1]<<endl;
}