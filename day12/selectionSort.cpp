#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int minIndex, temp;

    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for (int j = i + 1; j < n; j++)
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

// function to print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;

    cout << "enter Number of Elements : ";
    cin >> n;

    int arr[n]; // arraysize from user input

    cout << "Enter elements \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    SelectionSort(arr, n);

    cout << "Sorted Array :";
    printArray(arr, n);
}