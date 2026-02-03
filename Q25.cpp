#include <iostream>
using namespace std;

int main()
{
    string password;
    cout << "A strong password must have at least 8 characters, including uppercase, lowercase, digit, and special character.\n";
    cout << "Enter your password: ";
    cin >> password;

    string spec = "@#$%&*!";
    int upper = 0, lower = 0, digit = 0, special = 0;

    for (char ch : password)
    {
        if (ch >= 'A' && ch <= 'Z')
            upper++;
        else if (ch >= 'a' && ch <= 'z')
            lower++;
        else if (ch >= '0' && ch <= '9')
            digit++;
        else
        {

            for (char s : spec)
            {
                if (ch == s)
                {
                    special++;
                    break;
                }
            }
        }
    }

    if (upper >= 1 && lower >= 1 && digit >= 1 && special >= 1 && password.length() >= 8)
        cout << "Strong password";
    else
        cout << "Weak password";

    return 0;
}
