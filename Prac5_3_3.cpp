#include <iostream>
using namespace std;
#include<string>
int main()
{
    int i,j,n;
    cout<<"Enter Number of Lines of Pattern";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            char ch='A' + (j-1);
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}