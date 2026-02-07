#include <iostream>
using namespace std;
int main()
{
    int n;
    float p, c, d, f;

    cout << "Enter quantity of items: ";
    cin >> n;
    cout << "Enter unit price: ";
    cin >> p;

    c = n * p;

    if (n > 1000)
    {
        d = 0.10 * c;
        f = c - d;
        cout << "Total cost before discount: " << c << endl;
        cout << "Discount applied: " << d << endl;
        cout << "Final cost after discount: " << f << endl;
    }
    else
    {
        cout << "Total cost: " << c << endl;
        cout << "No discount applied." << endl;
    }

    return 0;
}
