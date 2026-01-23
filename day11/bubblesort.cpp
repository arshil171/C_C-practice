#include <iostream>
using namespace std;

class BubbleSort
{
    int arr[50];
    int n;

public:
    void input()
    {
        cout << "Enter Number of Element :-";
        cin >> n;
        cout << "enter element one by one :- \n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i] ;
            
        }
    }

    void sort()
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void show()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ",";
        }
    }
};

int main()
{
    BubbleSort b;

    b.input();
    b.sort();
    b.show();
}