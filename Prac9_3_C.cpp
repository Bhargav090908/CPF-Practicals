#include <iostream>
using namespace std;
int main()
{
    cout<<"=========MEMORY SAFETY DEMONSTRATION============";

    cout<<"\n1.NULL POINTER"<<endl;
    int *ptr1=nullptr;
    if (ptr1==nullptr)
    {
        cout<<"Pointer address : "<<ptr1<<endl;
        cout<<"Status : SAFE - Pointer is Null."<<endl;
        cout<<"Warning : Do not dereference a null pointer."<<endl;
    }
    cout<<"2.Invalid (dangling) pointer"<<endl;
    int *ptr2 = new int(100);
    cout<<"Value before deallocation : "<<*ptr2<<endl;
    cout<<"Adress before deallocation : "<<ptr2<<endl;
    delete ptr2;
    // ptr2 now holds the adress that must not be used to access the released object
    cout<<"Memory has been released."<<endl;
    cout<<"Status : UNSAFE - Pointer is dangling."<<endl;
    // Reset the pointer without dereferencing it
    ptr2=nullptr;
    cout<<"Pointer reset to nullptr"<<endl;
    cout<<"Status : SAFE - Pointer no longer holds the old address."<<endl;
    cout<<"3.UNINITIALIZED POINTER"<<endl;
    int *ptr3;
    cout<<"Pointer declared but not iniatiled"<<endl;
    cout<<"Status : UNSAFE - Pointer contains an indeterminate value."<<endl;
    // Do not print compare,dereference or otherwise evaluate the uniniatialized pointer value.
    cout<<"===============================DEMONASTRATION COMPLETED==================================";
}