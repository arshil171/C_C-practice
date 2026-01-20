#include <iostream>
using namespace std;

class A
{
public:
    int x, y;
    void add(int x, int y)
    {
        this->x = x;   // this  -> refer current object.  that avoid cconflicting problem suppose we have multiple method that access public variable x, y but method name was same or parameter will be same then it is not understable so use this keyword that help to remove conflicting problem and make code easy.      -> this is called pointer operator    and *p this is pointer method
        this->y = y;
        cout << x + y;
    }
};

int main()
{ 
  A obj;
  obj.add(10 , 20);
}