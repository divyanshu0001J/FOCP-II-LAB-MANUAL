#include <iostream>
using namespace std;
class A
{
    int a1, a2;

public:
    A()
    {
        a1 = 0;
        a2 = 0;
    }
    A(int a1, int a2)
    {
        this->a1 = a1;
        (*this).a2 = a2;
    }
    void display()
    {
        cout << a1 << endl;
        cout << a2 << endl;
    }
};
int main()
{
    A obj1, obj2(34, 78);         // static memory allocation
    A *obj4 = new A(11111, 2222); // dynaimc memory allocation
    obj1.display();
    obj2.display();
    obj4->display();
    delete obj4;
    obj4->display();
    return 0;
}