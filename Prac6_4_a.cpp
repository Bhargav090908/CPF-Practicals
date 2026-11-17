#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     int arows, acolumns, brows, bcolumns;

                    cout << "Enter the number of rows in 1st Matrix :";
                    cin >> arows;
                    cout << "Enter the number of columns in 1st Matrix :";
                    cin >> acolumns;
                    cout << "Enter the number of rows in 2nd Matrix :";
                    cin >> brows;
                    cout << "Enter the number of columns in 2nd Matrix :";
                    cin >> bcolumns;

                    if (acolumns == brows)
                    {
                        float res = 0, A[arows][acolumns], B[brows][bcolumns], Res[arows][bcolumns];

                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < acolumns; j++)
                            {
                                cout << "Enter Element of 1st Matrix at position [" << i + 1 << j + 1 << "] :";
                                cin >> A[i][j];
                            }
                        }
                        for (int i = 0; i < brows; i++)
                        {
                            for (int j = 0; j < bcolumns; j++)
                            {
                                cout << "Enter Element of 2nd Matrix at position [" << i + 1 << j + 1 << "] :";
                                cin >> B[i][j];
                            }
                        }
                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < bcolumns; j++)
                            {
                                res = 0;
                                for (int k = 0; k < acolumns; k++)
                                {
                                    res += A[i][k] * B[k][j];
                                }
                                Res[i][j] = res;
                            }
                        }
                        cout << "\nThe resultant matrix is :\n";
                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < bcolumns; j++)
                            {

                                cout << left << setw(5) << Res[i][j] << " ";
                            }
                            cout << "\n";
                        }
                    }
                    else
                    {
                        cout << "Matix Multiplication is Not Possible !!!";
                    }
}