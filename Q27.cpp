#include <iostream>
using namespace std;
int main()
{
    int i, n, temp = 0;
    for (i = 1; i <= 5; i++)
    {
        cout << "enter enter prce of item no. " << i << " = ";
        cin >> n;
        if (temp < n)
            temp = n;
    }
    cout << "Maximum=" << temp;
}