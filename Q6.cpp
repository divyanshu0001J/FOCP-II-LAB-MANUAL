#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        float salary, bonus, net;
        cout << "Enter basic salary for employee " << i << ": ";
        cin >> salary;
        bonus = 0.12 * salary;
        net = salary + bonus;
        cout << "Bonus for employee " << i << ": " << bonus << endl;
        cout << "Net salary for employee " << i << ": " << net << endl;
    }
}
