#include <iostream>
using namespace std;

int main()
{


    cout << "choose your choice: \n1:rectangle\n2:circle\n3:triangle\n";
    int choice;
    float pi = 3.14, area = 0;

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "enter the length and breadth of rectangle: ";
        int length, breadth;
        cin >> length >> breadth;
        area = length * breadth;
        break;
    case 2:
        cout << "enter the radius of circle: ";
        int radius;
        cin >> radius;
        area = pi * radius * radius;
        break;
    case 3:
        cout << "enter the base and height of triangle: ";
        int base, height;
        cin >> base >> height;
        area = 0.5 * base * height;
        break;
    default:
        cout << "invalid choice";
    }

    if (area > 0)
    {
        cout << "area of triangle is: " << area;
    }

    return 0;
}