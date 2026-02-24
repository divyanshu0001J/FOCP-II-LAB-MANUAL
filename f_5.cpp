#include <iostream>
using namespace std;

int prime(int a)
{
    if (a <= 1)
        return 0;

    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (prime(n) == 1)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}
