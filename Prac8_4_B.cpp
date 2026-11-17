#include <iostream>
using namespace std;
void reverseDigit(int);
int sumDigit(int);
int sumDigit(int n)
{
    if (n==0)
    {
        return;
    }
    return n%10 + sumDigit(n/10);
}
void reverseDigit(int n)
{
    if (n==0)
    {
        return;
    }
    cout<<(n%10);
    n=n/10;
    reverseDigit(n);
}
int main()
{
    int digit,sum;
    cout<<"Enter Number : ";
    cin>>digit;
    cout<<"Reversed Number : ";
    reverseDigit(digit);
    sum=sumDigit(digit);
    cout<<"\nSum of Digits : "<<sum;
    
}