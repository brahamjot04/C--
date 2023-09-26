// Demonstrate the use of unary, binary and special operators

#include <iostream>
using namespace std;

int main()
{
    cout << "Unary Operators" << endl;
    // Unary Operators
    int a = 10;
    cout << a << endl;
    cout << "\n";

    cout << "Unary Increment: ";

    a++; // Unary Increment
    cout << a << endl;
    cout << "\n";

    int b = 15;
    cout << b << endl;

    cout << "Unary Decrement: ";
    b--; // Unary Decrement
    cout << b << endl;
    cout << "\n";
    cout << "\n";
    cout << "\n";

    // Binary Operators
    int c = 25;
    int d = 20;

    cout << "Binary Operators" << endl;

    cout << "Add Operator: ";
    cout << c + d << endl;
    cout << "\n";

    cout << "Minus Operator: ";
    cout << c - d << endl;
    cout << "\n";

    cout << "Multiply Operator: ";
    cout << c * d << endl;
    cout << "\n";

    cout << "Divide Operator: ";
    cout << c / d << endl;
    cout << "\n";

    cout << "Modulus Operator: ";
    cout << c % d << endl;
    cout << "\n";

    return 0;
}