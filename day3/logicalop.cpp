#include <iostream>
using namespace std;

int main()
{
    int btr;
    cout << "Enter Your Battery Percentage -- ";
    cin >> btr;

    if (btr <= 20)
    {
        cout << "Please Connect the Charger";
    }
    else if (btr >= 20 && btr <= 99)   // if both is true then and then true otherwise false
    {
        cout << "Phone is Under the Charging";
    }
    else if (btr >= 20 || btr <= 99)   // if any is true then and then true otherwise false else if both false then  then false
    {
        cout << "Phone is Under the Charging";
    }
    else
    {
        cout << "Phone is charged Remove the charger";
    }
}