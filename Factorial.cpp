// Write a program to calculate the factorial of a given number using a loop
#include <iostream>
using namespace std;

class Factorial
{
public:
    int i = 1;
    int result = 1;

    int fac(int n)
    {
        while (i <= n)
        {
            result *= i;
            i++;
        }
        return result;
    }
};

int main()
{
    int n, a = 1;
    int i = 1;

    cout << "Enter the number to find its factorial: ";
    cin >> n;
    Factorial f;
    int res = f.fac(n);
    cout << "Factorial of " << n << " is: " << res << endl;
    return 0;
}