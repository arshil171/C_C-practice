#include <iostream>
using namespace std;

// Take Nothing Return Nothing

// void Hello()
// {
//     cout << "Hello Brother";
// }

// int main()
// {
//     Hello();
//     return 0;
// }

// Take Something Return Nothing

// void Sum(int a, int b)
// {
//     cout << a + b;
// }
// int main(){
//     Sum(4 ,5);
//     return 0;
// }

// Take Nothing Return Something

// int Sum()
// {
//     return 10;
// }

// int main()
// {
//     cout << Sum();
//     return 0;
// }

// Take Something Return Something

// int Sum(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     cout << Sum(10, 20);
//     return 0;
// }

// Nested Function - funnction call another  function is called nested function

void hello()
{
    cout << "Hello brother";
}

void show()
{
    hello();
}

int main(){
    show();
    return 0;
}