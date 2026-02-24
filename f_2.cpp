#include <iostream>
using namespace std;
int sum(int a, int b);
int main()
{
    int b = sum(9, 99);
    cout << b;
}
int sum(int a, int b)
{
    return (a + b);
}