#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter Number of Lines of Pattern: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--){
            cout<<" ";
        }

        for(j=1;j<=i;j++){
            char ch= 'A'+(j-1);
            cout<<ch;
        }
        for(j=i-1;j>=1;j--){
            char ch= 'A'+j-1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}