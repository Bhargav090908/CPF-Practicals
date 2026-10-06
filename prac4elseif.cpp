#include<iostream>
using namespace std;
int main()
{
    int mathematics,physics,cpf;
    int total,percentage; 
    
    cout << "mathematics "<<endl;

    cin >> mathematics;

    cout << "mathematics marks:"<< mathematics <<endl;

    cout << "physics"<<endl;

    cin >> physics;

    cout << "physics marks:"<< physics <<endl;

    cout << "computer programming foundation"<<endl;

    cin >> cpf;

    cout << "computer programming foundation marks:"<< cpf <<endl;

    total = mathematics+physics+cpf;

    cout << "total:" << total <<endl;

    percentage=(total/300)*100;
 
    cout << "percentage:" << percentage << endl;




             if(percentage>=90)
             {
                cout << "You have paseed the exam with GRADE A+";
             }
             else if(percentage>=80 && percentage<=89)
            {
                cout << "You have passed the exam with GRADE A";
            }
            else if(percentage>=70 && percentage<=79)
            {
            cout << "You have passed with GRADE B";
            }
                   
      

} 