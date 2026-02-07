#include <iostream>
using namespace std;
int main()
{
    int i, n, a[5], temp = 0, temp2 = 0;
    for (i = 1, n = 0; i <= 5; i++, n++)
    {
        cout << "enter prce of item no. " << i << " = ";
        cin >> a[n];
        if (temp < a[n])
        {
            temp2 = temp;
            temp = a[n];
        }
        else if (temp2 < a[n] && a[n] != temp)
            temp2 = a[n];
    }
    cout << "Maximum=" << temp << endl;
    cout << "Second Maximum=" << temp2;
}