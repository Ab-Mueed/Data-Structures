#include<iostream>
using namespace std;
void octal(int n);
int main()
{
    int decimal;
    cout<<"Enter a decimal Number: ";
    cin>>decimal;
    octal(decimal);
    return 0;
}
void octal(int n)
{
    if(n<8)
    cout<<n;
    else
    {
        octal(n/8);
        cout<< n%8;
    }
}