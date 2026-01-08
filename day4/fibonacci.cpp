#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c = 0;
    int n;

    cout << "Enter a Number of terms you want to find fibonacci :-";
    cin >> n;

    cout << a << ",";
    cout << b << ",";
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        cout << c << ",";
        a = b;
        b = c;
    }
}