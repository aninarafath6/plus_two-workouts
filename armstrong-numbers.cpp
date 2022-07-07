#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, reminder, sum = 0;

    // input a number from user.
    cout << "enter a number :";
    cin >> num;

    int original = num;
    int count = 0;

    // loop until number > 0
    while (num > 0)
    {
        // store the reminder of number in reminder variable.
        reminder = num % 10;
        // store and sum with reminder.
        sum += pow(reminder, 3);
        // divide the number by 10.
        num = num / 10;
    }

    // check sum of cube of digits is equal to our original number then this is armstrong otherwise not.
    if (sum == original)
    {
        cout << original << " is a Armstrong number.";
    }
    else
    {
        cout << original << " is not a Armstrong number.";
    }
}

// example armstrong-numbers :- 153 , 371 ,1634