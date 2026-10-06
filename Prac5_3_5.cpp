#include <iostream>
using namespace std;
int main()
{
    int i, j, n, k,l;
    cout << "Enter Number of Lines of Pattern :";
    cin >> n;
    /*for(i=1;i<=n;i++)
    {
        for (k=n;k>i;k--)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(j=i-1;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }*/
   for(i=1;i<=n;i++)
    {
        for (k=1;k<=n-i;k++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}