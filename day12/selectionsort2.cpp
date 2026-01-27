#include <iostream>
using namespace std;

void selectionSort2(int arr[], int n)
{
    int minIndex, temp;

    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for (int j = i + 1; j < n ; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // swap

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
void printArray(int arr[], int n)
{
    cout << "Sorted Arrray :-";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;

    cout << "enter The NUmmber of element you want to insert :-";
    cin >> n;

    int arr[n];
    cout << "Enter element one by one : \n";

    for (int i = 0; i < n ; i++)
    {
        
        cin >> arr[i];
    }

    selectionSort2(arr, n);

    printArray(arr , n);
}