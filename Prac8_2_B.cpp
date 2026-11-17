#include<iostream>
using namespace std;
void callByValue(int);
void callByReference(int &number);
int main()
{
    int num=5;
    cout<<"***********************************************************"<<endl;
    cout<<"      PARAMETER           PASSING        ANALYZER"<<endl;
    cout<<"***********************************************************"<<endl;
    cout<<"---------------------Call by Value-------------------------"<<endl;
    cout<<"Outside Function - Before Modification :"<<num<<endl;
    callByValue(num);
    cout<<"Outside Function - After Modification  :"<<num<<endl;
    cout<<"--------------------Call by Reference----------------------"<<endl;
    cout<<"Outside Function - Before Modification :"<<num<<endl;
    callByReference(num);
    cout<<"Outside Function - After Modification  :"<<num<<endl;
}
void callByValue(int number)
{
    cout<<"Inside Function - Before Modification  :"<<number<<endl;
    number+=10;
    cout<<"Inside Function - After Modification   :"<<number<<endl;
}
void callByReference(int &number)
{
    cout<<"Inside Function - Before Modification  :"<<number<<endl;
    number+=10;
    cout<<"Inside Function - After Modification   :"<<number<<endl;
}