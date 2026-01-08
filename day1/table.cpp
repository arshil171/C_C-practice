#include <iostream>
using namespace std;

int main(){
       int n ;

       cout << "Enter a Number that you want to print a table" << endl;
       cin >> n;

       for(int i=1 ; i<=10 ; i++){
           cout << n << "*" << i << "=" << n*i << endl;
       }
       return 0 ;
}