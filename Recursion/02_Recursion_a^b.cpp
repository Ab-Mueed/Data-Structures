#include <iostream>
using namespace std;
long int exp(int a, int b);
int main()
{

    int base, power;
    long int result;
    cout << "Enter base Number: ";
    cin >> base;
    cout << "Enter Positive Power: ";
    cin >> power;
    result = exp(base, power);
    cout<<base<<"^"<<power<<" = "<<result;
    return 0;
}

long int exp(int a, int b)
{
    if (b != 0)
        return a * exp(a, b - 1);
    else
        return 1;
}