/*A weather monitoring app records 30-day temperature logs. Implement a solution to store daily
temperatures in an array and display the minimum temperature for the month.*/
#include <iostream>
using namespace std;
int i, n, a[30], temp = 0;
for (i = 1, n = 0; i <= 5; i++, n++)
{
    cout << "enter temp of day 1" << i << " = ";
    cin >> a[n];
    if (n == 0)
        temp = a[n];
    if (temp > a[n])
        temp = a[n];
}
cout << "Minimum=" << temp;