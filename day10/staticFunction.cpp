#include <iostream>
using namespace std;

class Company{
    public :
       static int empCount;

    static void show(){
        cout << "Total employee" << empCount;
    }
};

int Company::empCount = 25;

int main(){
    Company :: show();  
}