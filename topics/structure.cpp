#include <iostream>
using namespace std;

// structure is user defined data types which is used to store group of items of  non-similar items
// structure is used to store data in memory in a contiguous manner

// example:-

struct student
{
    int rolNno;
    char name[20];
    float weight;
} ramees;

// nested structure 
struct user
{
    int id;
    char name[20];
    struct address
    {
        char city[20];
        char state[20];
    } address;
};

int main()
{


    // There is 3 methods to create a data using structure
    // 1st method
    student john = {12, "john joseph", 50.3};

    // 2nd method
    struct student kevin = {13, "mr. kevin", 60.3};

    // 3rd method is we can create a variable when create structure.

    // we name put values by using dot operator.
    ramees.weight = 60.3;
    ramees.rolNno = 22;

    // we can access all felids of structure using dot operator
    cout << john.name << endl;

    // using nested structure

    user elon = {
        1,
        "elon musk",
        {
            "New york",
            "state of new york",
        },
    };

    cout << "name: " << elon.name << endl
         << "city: " << elon.address.city << endl
         << "state: " << elon.address.state << endl;
    return 0;
}