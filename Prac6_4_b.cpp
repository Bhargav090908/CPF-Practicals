#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "\n*****************************************************************************";
    cout << "\n MERGE SORTED ARRAYS ";
    cout << "\n*****************************************************************************";
    cout << "\nEnter size of array 1 : ";
    cin >> n1;
    cout << "\nEnter size of array 2 : ";
    cin >> n2;
    int arr1[n1], arr2[n2];
    for (int i = 0; i < n1; i++)
    {
        cout << "\nEnter Element " << i + 1 << " of Array 1 : ";
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cout << "\nEnter Element " << i + 1 << " of Array 2 : ";
        cin >> arr2[i];
    }
    int sort[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            sort[k] = arr1[i];
            i++;
        }
        else
        {
            sort[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        sort[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        sort[k] = arr1[j];
        j++;
        k++;
    }
    cout << "\nArray 1 : ";
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nArray 2 : ";
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\nMerged Sorted Array : ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << sort[i] << " ";
    }

    cout << "\n-----------------------------------------------------------------------------";
}
