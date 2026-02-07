#include <iostream>
using namespace std;
int main()
{
    int a, b, temp, c, d;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    c = a;
    d = b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping (using temporary variable): " << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    c = c + d;
    d = c - d;
    c = c - d;
    cout << "After swapping (without using temporary variable): " << endl;
    cout << "First number: " << c << endl;
    cout << "Second number: " << d << endl;

    return 0;
}