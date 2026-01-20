#include <iostream>
using namespace std;
int x = 10; // globel variable
int main()
{
    int x = 20;
    cout << x << endl;   // Accessing a x=20 variable it is not globel
    cout << ::x; // Accessing a Globel variable
}