/*Create a program that takes multiple numbers as input and
calculates their sum while using Continue to skip negative numbers and break to stop input if the user enters a specific value*/
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int i = 1;
    int n;
    while (i == 1)
    {
        cout << "enter the no. you wanna add=";
        cin >> n;
        if (n < 0)
            continue;
        else if (n > 0)
            sum += n;
        else if (n == 0)
            break;
        for (int i = 0; i <= 34; i++)
            cout << i;
    }
}