#include <iostream>
using namespace std;

int main()
{
    int array[20], n;
    cout << "enter the number of elements in array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> array[i];
    }

    // average the number of elements
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    float average = sum / n;
    cout << "average of array is: " << average << endl;

    // numbers greater than average
    cout << "numbers greater than average: ";
    for (int i = 0; i < n; i++)
    {
        if (array[i] > average)
        {
            cout << array[i] << "\t";
        }
    }
}