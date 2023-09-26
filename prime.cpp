// Check whether a number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to check whether it is prime or not: ";
    cin >> n;
    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime" << endl;
            break;
        }
        else
        {
            if (n == 2 || n == 3)
            {
                cout << "Prime" << endl;
                break;
            }
        }
    }
    return 0;
}