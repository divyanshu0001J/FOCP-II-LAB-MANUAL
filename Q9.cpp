#include <iostream>
using namespace std;
int main()
{
    char s;
    cout << "Enter a symbol: ";
    cin >> s;
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
        cout << "The symbol is a vowel." << endl;
    else if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
        cout << "The symbol is a consonant." << endl;
    else if (s >= '0' && s <= '9')
        cout << "The symbol is a number." << endl;
    else
        cout << "The symbol is neither a vowel, consonant nor a number." << endl;
}