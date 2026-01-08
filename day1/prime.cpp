#include<iostream>
using namespace std;
   // prime or not prime
int main(){
    int n , count = 0;
      cout << "Enter a Number which you would to check prime or not prime" << endl;
      cin >> n ;

      for(int i=1  ; i<=n ; i++){
        if(n%i == 0){
            count ++;
        }
      }

      if( count== 2){
        cout << "enter Number is prime";
      }
      else{
        cout << "Number is not prime";
      }
    return 0;
}