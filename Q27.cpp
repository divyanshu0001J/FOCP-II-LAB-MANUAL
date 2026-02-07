#include <iostream>
using namespace std;
int main()
{
    int i, n, a[5], temp = 0;
    for (i = 1, n = 0; i <= 5; i++, n++)
    {
        cout << "enter enter prce of item no. " << i << " = ";
        cin >> a[n];
        if (temp < a[n])
            temp = a[n];
    }
    cout << "Maximum=" << temp;
}