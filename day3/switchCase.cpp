#include <iostream>
using namespace std;

int main()
{
    // menu driven

    int a, b, ch;

    cout << "Enter A First Number :-";
    cin >> a;

    cout << "Enter A Second Number :-";
    cin >> b;

    do
    {
        cout << "\n 1) Addition \n 2)Subtraction \n 3)Division \n 4)Multiplication \n 5)Modulo \n 6)Exit \n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Addition is :-" << a + b;
            break;
        case 2:
            cout << "subtarction is :- " << a - b;
            break;

        case 3:
            cout << "Divison is :-" << a / b;
            break;

        case 4:
            cout << "Multiplicatin is :-" << a * b;
            break;

        case 5:
            cout << "Modulo is :-" << a % b;
            break;

        default:
            cout << "Invalid input";
             break;
        }
    } while (ch != 6);
}