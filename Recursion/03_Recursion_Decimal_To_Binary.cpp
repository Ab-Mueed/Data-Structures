#include<iostream>
using namespace std;
void binary(int n);
int main()
{
    int decimal;
    cout<<"Enter a decimal Number: ";
    cin>>decimal;
    binary(decimal);
    return 0;
}
void binary(int n)
{
    if(n==0)
    cout<<"0";
    if(n==1)
    cout<<"1";
    else
    {
        binary(n/2);
        cout<< n%2;
    }
}