// sum of elements in an array of n elements
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter number of elements= ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements= ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;
}