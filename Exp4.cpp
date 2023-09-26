// Programming practice on “for”, “do-while”, “while”, “break” and “continue” statements in C++

#include <iostream>
using namespace std;

int main()
{
    // for loop
    for (int i = 0; i < 10; i++)
    {
        if (i==1)
            continue;
        if (i==5)
            break;
        cout << i << "\n";
    }
    cout << "\n";

    // do-while loop
    int j = 5;
    do
    {
        cout << j << "\n";
        j++;
    } while (j == 0);
    cout << "\n";

    // while loop
    int k = 1;
    while (k == 1)
    {
        cout << k << endl;
        k++;
    }
    cout << "\n";

    return 0;
}