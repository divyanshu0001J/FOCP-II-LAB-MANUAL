#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    cout << "  before swap in func=  " << a << "    " << b;
    int temp = a;
    a = b;
    b = temp;
    cout << "  after swap in function=  " << a << "   " << b;
}
int main()
{
    int x, y;
    cout << "  enter two no=";
    cin >> x >> y;
    cout << "  before swap in main=  " << x << "    " << y;
    swap(x, y);
    cout << "  after swap in main=  " << x << "    " << y;
    return 0;
}