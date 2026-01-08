#include <ioStream>
using namespace std;

int main(){
    //  Enter Number is odd or not

    int a;

    cout << "Please Enter a number which you like to see odd or even  -" << endl;
    cin >> a ;
    
    if(a % 2 == 0){
        cout << "Enter Number is even";

    }
    else{
        cout << "Enter Number is odd";
    }


    return 0;
}