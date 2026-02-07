#include <iostream>
using namespace std;
int main()
{
    int o = 0, e = 0, a[5], i, n;
    for (i = 0, n = 1; i <= 4; i++, n++)
    {
        cout << "enter no. " << n << " = ";
        cin >> a[i];
        if (a[i] % 2 == 0)
            e = e + a[i];
        else
            o = o + a[i];
    }
    cout << " sum of Even numbers = " << e << endl;
    cout << "sum of Odd numbers = " << o << endl;
}