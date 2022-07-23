#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char string[20];
    int words = 0;
    cout << "enter a stirng:";
    gets(string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            words++;
        }
    }
    cout << "no of words : " << words + 1;
}