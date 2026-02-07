#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float p, t, d;
    cout << "Enter item number: ";
    cin >> i;
    cout << "Enter quantity: ";
    cin >> n;
    cout << "Enter unit price: ";
    cin >> p;
    t = n * p;
    d = t * 0.20;
    cout << "Total amount before discount: " << t << endl;
    cout << "Discount amount: " << d << endl;
    cout << "Total amount after discount: " << t - d << endl;
}