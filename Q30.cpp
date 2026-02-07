#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    float s[10], tot = 0, avrg;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter salary for employee " << i + 1 << ": ";
        cin >> s[i];
        tot += s[i];
    }
    avrg = tot / n;
    cout << "Total salary: " << tot << endl;
    cout << "Average salary: " << avrg << endl;
    return 0;
}