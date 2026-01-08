#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 4, 3};
    int n = 4;
    int max = arr[0];

    for (int i = 0; i <= 4; i++)
    {
        if (max <= arr[i + 1])
        {
            max = arr[i + 1];
        }
    }
    cout << max;
}