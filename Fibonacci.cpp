// Fibonacci Series
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1;
    int n;
    cout << "Generate Fibonnaci Series upto: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a << endl;
        }

        if (i == 2)
        {
            cout << b << endl;
        }

        int c = a + b;
        cout << c << endl;

        a = b;
        b = c;
    }
    return 0;
}