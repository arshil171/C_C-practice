#include <iostream>
using namespace std;

class A
{
private:
    string name;

public:
    string getName()
    {
        return name;
    }
    void setName(string setName)
    {
        name = setName;
    }
};

int main()
{
    A obj;
    obj.setName("Hello Arshil");

    cout << "Name => " << obj.getName() << endl;
}
