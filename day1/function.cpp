#include <iostream>
using namespace std;

int add(int a , int b){
    return a + b;
}

int multiply(int a , int b){
    return a * b;
}

int main(){

    cout << add(12 , 10) << endl;
    cout << multiply(10 , 20);
    return 0;
}
