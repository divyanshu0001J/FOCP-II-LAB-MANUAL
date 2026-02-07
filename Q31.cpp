#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, a[5];
    cout << "Enter 5 defect codes: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        if (a[i] % 3 == 0 && a[i] % 5 == 0)
            count++;
    }
    cout << "Number of defect codes divisible by both 3 and 5: " << count << endl;
    return 0;
}