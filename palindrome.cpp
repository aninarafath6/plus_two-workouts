#include <iostream>
using namespace std;

int main()
{
    int number, original;

    // reminder and reversed variable declaring as 0 initially.
    int reversed = 0, reminder = 0;

    // input a value from user.
    cout << "enter a number: ";
    cin >> number;

    // store the inital number value in original variable.
    original = number;

    // loop until number is  > 0.
    while (number > 0)
    {
        // store the reminder of number in reminder variable.
        reminder = number % 10;
        // store the reminder in reversed variable.
        reversed = (reversed * 10) + reminder;
        // divide the number by 10.
        number = number / 10;
    }

    // check number is equal to our original number then this is palindrome otherwise not.
    if (original == reversed)
    {
        cout << "the number is a palindrome.";
    }
    else
    {
        cout << "the number is not a palindrome.";
    }
}