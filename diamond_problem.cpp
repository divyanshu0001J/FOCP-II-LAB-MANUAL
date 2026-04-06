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
    void displayA()
    {
        cout << "\n Var= " << var;
    }
};
class B : virtual public A
{
    int var1;

public:
    B()
    {
        cout << "\n A Default constructor ";
        var1 = 1150;
    }
    void displayB()
    {
        cout << "\n Var= " << var1;
    }
};
class C : virtual public A
{
    int var2;

public:
    C()
    {
        cout << "\n A Default constructor ";
        var2 = 11150;
    }
    void displayC()
    {
        cout << "\n Var= " << var2;
    }
};
class D : public B, public C
{
    int var1;

public:
    D()
    {
        cout << "\n A Default constructor ";
        var1 = 1150;
    }
    void displayD()
    {
        cout << "\n Var= " << var1;
    }
};
int main()
{
    D obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    obj.displayD();
    return 0;
}
