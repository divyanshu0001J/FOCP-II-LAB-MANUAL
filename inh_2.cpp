#include <iostream>
using namespace std;
class A
{
    int var;

public:
    A()
    {
        cout << "\n A Default constructor ";
        var = 150;
    }
    void display()
    {
        cout << "\n Var= " << var;
    }
};
class B : public A
{
    int var2;

public:
    B()
    {
        cout << "\n B default cnstructor" << var2;
    }
};
int main()
{
    B obj1;
    obj1.display();
}