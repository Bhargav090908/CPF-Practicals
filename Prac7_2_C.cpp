#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main(){
    char para[2000];
    char sent[2000];
    cout << "\n*********************************************************************************************************";
    cout << "\n             DOCUMENT                TEXT             ANALYZER";
    cout<<"\n            STRING             CONCATENATION";
    cout << "\n*********************************************************************************************************\n";
    cout<<"\nEnter the existing paragraph :";
    cin.getline(para,2000);
    cout<<"\nEnter another sentence : ";
    cin.getline(sent,2000);
    strcat(para," ");
    strcat(para,sent);
    cout<<"\n----------------------------------------------------";
    cout<<"\nUpdated Paragraph : "<<para;
    return 0;
}