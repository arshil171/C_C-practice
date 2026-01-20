#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    *p = 50;

    cout << p << endl; // address of a

    cout << *p << endl; // value of a aftre i change also using *p
    cout << a << endl;  // value of a after i change using *p it also change
    cout << &a << endl; // address of a
}