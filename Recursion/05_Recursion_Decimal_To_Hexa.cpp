#include <iostream>
using namespace std;
void hexa(int n);
int main()
{
    int decimal;
    cout << "Enter a decimal Number: ";
    cin >> decimal;
    hexa(decimal);
    return 0;
}
void hexa(int n)
{
    if (n < 10)
        cout << n;
    else if (n >= 10 && n < 16)
    {
        if (n == 10)
            cout << "A";
        else if (n == 11)
            cout << "B";
        else if (n == 12)
            cout << "C";
        else if (n == 13)
            cout << "D";
        else if (n == 14)
            cout << "E";
        else
            cout << "F";
    }
    else
    {
        hexa(n / 16);

        if (n % 16 == 10)
            cout << "A";
        else if (n % 16 == 11)
            cout << "B";
        else if (n % 16 == 12)
            cout << "C";
        else if (n % 16 == 13)
            cout << "D";
        else if (n % 16 == 14)
            cout << "E";
        else if (n % 16 == 15)
            cout << "F";
        else
            cout << n % 16;
    }
}