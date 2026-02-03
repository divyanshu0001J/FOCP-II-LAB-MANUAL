#include <iostream>
using namespace std;
int main()
{
    int i, n, total;
    for (i = 1; i <= 5; i++)
    {
        cout << "enter marks in subject" << i << " out of 50 = ";
        cin >> n;
        total += n;
    }
    float per = total / 250.0 * 100;
    cout << "Percentage=" << per << "%";
}