#include<iostream>
#include<string>
using namespace std;
void displayMessage(void);
int getNumber(void);
void displaySum(int,int);
int calculateProduct(int,int);
int main()
{
    int number1,number2;
    cout<<"**************************************************************"<<endl;
    cout<<"         FUNCTION           DESIGN           ANALYZER"<<endl;
    cout<<"**************************************************************"<<endl;
    displayMessage();
    number1=getNumber();
    cout<<"2.Function without Parameters and with Return Value"<<endl;
    cout<<"Returned Value : "<<number1<<endl;
    displaySum(5,10);
    cout<<"4.Function with Parameters and with Return Value"<<endl;
    number2=calculateProduct(5,6);
    cout<<"First Number  : "<<5<<endl;
    cout<<"Second Number : "<<6<<endl;
    cout<<"Product       : "<<number2<<endl;
}
void displayMessage()
{
    cout<<"\n1.Functiom without Parameter and without Return Value";
    cout<<"\nOutput : Welcome to Function Design Analyzer !"<<endl;
}
int getNumber()
{
    int num;
    num=25;
    return num;
}
void displaySum(int a,int b)
{
    int sum=a+b;
    cout<<"3.Function with Parameters and without Return Value"<<endl;
    cout<<"First Number  : "<<a<<endl;
    cout<<"Second Number : "<<b<<endl;
    cout<<"Sum           : "<<sum<<endl;
}
int calculateProduct(int a,int b)
{
    int res=a*b;
    
    return res;
}