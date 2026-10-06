#include <iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter number of lines of pattern :";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for (k=n;k>i;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}