#include <iostream>
using namespace std;

int main()
{
    int num, reminder, sum = 0;

    // input a number from user.
    cout << "enter a number :";
    cin >> num;

    // loop until number > 0
    while (num > 0)
    {
        // store the reminder of number in reminder variable.
        reminder = num % 10;
        // store and sum with reminder.
        sum += reminder;
        // divide the number by 10.
        num = num / 10;
    }

    cout << "sum is :" << sum;
}