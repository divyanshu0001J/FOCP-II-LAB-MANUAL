//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the id=";
    cin >> n;
    if (n == 0)
        cout << "error";
    else
    {
        if (n % 3 == 0)
            cout << "buzz ";
        if (n % 5 == 0)
            cout << "fuzz";
    }
}