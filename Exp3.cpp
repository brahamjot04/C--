// Programming practice on if, if-else, nested if and switch statements

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << endl;

    // if statement
    cout << "Demonstartion of if Statement" << endl;
    if (a == 10)
    {
        cout << "Hello World" << endl;
    }

    // if-else statement
    cout << "Demonstartion of if-else Statement" << endl;
    if (a == 10)
    {
        cout << "Hello" << endl;
    }
    else
    {
        cout << "World!" << endl;
    }

    // Nested if Statement
    cout << "Demonstartion of if-else Statement" << endl;

    if (a > b)
    {
        if (a > c)
        {
            cout << "a is the largest" << endl;
        }
    }
    else
    {
        cout << "a is not the largest" << endl;
    }

    // Switch Statement
    int day = 4;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    }
    return 0;
}