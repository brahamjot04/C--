// Check whether a number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cout << "Enter the number to check: ";
    cin >> n;
    for (int i = 2; i <= (n / 2); i++)
    {
        if (i % n == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        cout << n << " is a Prime number" << endl;
    }
    else
    {
        cout << n << " is not a Prime Number" << endl;
    }
    return 0;
}