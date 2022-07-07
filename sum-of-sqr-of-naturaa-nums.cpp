#include <iostream>
// #include <math.h>
using namespace std;
int main()
{

    int n;
    cout << "enter a number :";
    // input a number from user
    cin >> n;

    int sum = 0;


    // using by for loop .
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    //also we can use,  same as we can use by equation which is n *(n + 1) * (2*n + 1) / 6
    // calculate sum squires of first n natural number.
    sum = n * (n + 1) * (2 * n + 1) / 6;
    cout << "sum is : " << sum;

    return 0;
}