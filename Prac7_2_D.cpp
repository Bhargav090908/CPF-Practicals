#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
    char sent[2000];
    char word[2000];
    int len, fo = 0, i = 0, j = 0, c = 0;
    cout << "Enter Sentence : ";
    cin.getline(sent, 2000);
    cout << "Enter Word to be Searched : ";
    cin.getline(word, 2000);
    /* len = strlen(word);
     while (sent[i] != '\0')
     {
         if (c!=len)
         {
             while (word[i] != '\0')
         {
             if (sent[i] == word[i] && c <= len)
             {
                 i++;
                 c++;
             }
             else{
                 i++;
             }
         }
         }
        c=0;
        j++;
     }
     if (c == len)
     {
         cout << "Keyword Found";
         cout << "First Occurence at index : " << j;
     } */
    char *pos = strstr(sent, word);
    if (pos != nullptr)
    {
        int index = pos - sent;
        cout << "\n------------------------------------";
        cout << "\nKeyword Found";
        cout << "\nFirst Occurrence Position : " << index;
        cout << "\n------------------------------------";
    }
    else
    {
        cout << "\n------------------------------------";
        cout << "\nKeyword Not Found";

        cout << "\n------------------------------------";
    }
}