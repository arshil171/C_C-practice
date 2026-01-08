#include <iostream>
using namespace std;

int main()
{
    //  1) Arithmetic OP - +, -, *, /, %
    //  2) Assignment OP - +=, -=, *=, /=, %=
    //  3) Logical OP - &&, ||, ^
    //  4) Relational OP - <, >,<=, >=, ==, !=
    int a, b;
    cout << "Enter  a First Number -";
    cin >> a;
    cout << "Enter a Second Number -";
    cin >> b;

    cout << "Addition is -- " << a + b << endl;
    cout << "Subtraction is -- " << a - b << endl;
    cout << "Multiplication is -- " << a * b << endl;
    cout << "Divison is -- " << a / b << endl;
    cout << "MOdulo is -- " << a % b << endl;

    return 0;
}