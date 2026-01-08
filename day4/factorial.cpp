#include <iostream>
using namespace std;

int main()
{
    int n;
    int f = 1;
    cout << "Enter a Number you want to find factorial :-";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        f *= i;
      
    }

    cout << "Factorial of given NUmber is :-" << f;
}