// convert celcius to farhanite and vice versa
#include <iostream>
using namespace std;
int main()
{

    cout << " enter  1  for converting from celcius to farhanite \n enter   2   for converting farhanite to celcius. ";
    float n, f, c;
    float temp;
    cout << "\nenter your choice = ";
    cin >> n;
    if (n == 1)
    {
        cout << "enter temp in celcius =";
        cin >> c;
        temp = 1.8 * c + 32;
        cout << "\ntemp in fahrenheit = " << temp;
    }
    else if (n == 2)
    {
        cout << "enter temp in fahrenheit  =";
        cin >> f;
        temp = (f - 32.0) * 5 / 9;
        cout << "\ntemp in celcius = " << temp;
    }
    else
        cout << "wrong input ";
}