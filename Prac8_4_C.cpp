#include<iostream>
using namespace std;
int binary(int,int);
int binary(int n1,int n2)
{
    if (n1>0)
    {
        return (n1%2)*n2 + binary(n1/10,n2/10);
    }
    n1=n1/10;

}
int main()
{
    int n1,n2=1,digits=0,bin;
    cout<<"Enter Decimal Number : ";
    cin>>n1;
    for (int i = n1; i >0; i/10)
    {
        digits++;
    }
    for (int i = 0; i < digits; i++)
    {
        n2=n2*10;
    }
    bin=binary(n1,n2);
    cout<<bin;
}