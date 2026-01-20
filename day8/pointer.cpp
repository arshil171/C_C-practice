#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;

    cout << "address of p :-" << p << endl;
    cout << "pointer of p , value of store address :-" << *p << endl;
    cout << " value of a :-" << a << endl;
    cout << "address of a :-" << &a << endl;
}