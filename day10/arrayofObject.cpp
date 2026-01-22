#include <iostream>
using namespace std;

class Student {
   
    public:
       
        int roll;
        string name;
   
        void getData() {
            cout << "Enter?Roll?and?Name:?";
            cin >> roll >> name;
        }
       
        void showData() {
            cout << "Roll:?" << roll << "?Name:?" << name << endl;
        }
};

int main() {
   
    Student s[3];
   
    for(int i = 0; i < 3; i++) {
        s[i].getData();
    }
   
    for(int i = 0; i < 3; i++) {
        s[i].showData();
    }
}