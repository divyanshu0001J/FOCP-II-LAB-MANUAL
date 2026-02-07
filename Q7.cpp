#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter score for player 1: ";
    cin >> a;
    cout << "Enter score for player 2: ";
    cin >> b;
    cout << "Enter score for player 3: ";
    cin >> c;

    if (a > b && a > c)
        cout << "Player 1 is the winner with a score of " << a << endl;
    else if (b > a && b > c)
        cout << "Player 2 is the winner with a score of " << b << endl;
    else if (c > a && c > b)
        cout << "Player 3 is the winner with a score of " << c << endl;
    else
        cout << "It's a tie!" << endl;

    return 0;
}