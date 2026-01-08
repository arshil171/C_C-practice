#include<iostream>
using namespace std;

class Addition{
   public : 
      int a;
      int b;

    void addition(){
        cout << "Enter a First Number -- " ;
        cin >> a;

        cout << "Enter a Second Number -- " ;
        cin >> b;

        cout << "Addition is -- " << a+b ;
    }
};

int main(){
    Addition a1;
    a1.addition();
}