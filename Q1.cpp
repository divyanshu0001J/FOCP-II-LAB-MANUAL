// Average marks for three students
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the marks for the first students = ";
    cin >> a;
    cout << "enter the marks for the second students = ";
    cin >> b;
    cout << "enter the marks for the third students = ";
    cin >> c;
    float avrg;
    avrg = (a + b + c) / 3.0;
    cout << "Their average is = " << avrg;
    return 0;
}