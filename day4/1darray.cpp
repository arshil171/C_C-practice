#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;

    cout << "Enter a Number of arr size";
    cin >> n;

    for (int i = 0; i < n; i++)
    {   
        cout << "Enter Number is [" << i << "] is :- ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}