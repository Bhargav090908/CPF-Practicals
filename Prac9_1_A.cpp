#include <iostream>
using namespace std;
int main()
{
    int age=20;
    float marks = 85.5f;
    double sal=45000.75;
    char grade = 'A';
    bool ispassed = true;
    cout<<"===============MEMORY ADDRESS EXPLORER======================";
    cout<<"Variable Name : age"<<endl;
    cout<<"Stored Value : "<<age<<endl;
    cout<<"Memory Address : "<<&age<<endl;
    cout<<"Variable Name : marks"<<endl;
    cout<<"Stored Value : "<<marks<<endl;
    cout<<"Memory Address : "<<&marks<<endl;
    cout<<"Variable Name : sal"<<endl;
    cout<<"Stored Value : "<<sal<<endl;
    cout<<"Memory Address : "<<&sal<<endl;
    cout<<"Variable Name : grade"<<endl;
    cout<<"Stored Value : "<<grade<<endl;
    cout<<"Memory Address : "<<static_cast<void*>(&grade)<<endl;
    cout<<"Variable Name : ispassed"<<endl;
    cout<<"Stored Value : "<<ispassed<<endl;
    cout<<"Memory Address : "<<&ispassed<<endl;
}