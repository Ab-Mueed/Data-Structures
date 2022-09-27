#include<iostream>
using namespace std;
void base3(int n);
int main()
{
    int decimal;
    cout<<"Enter the Decimal Number: "<<endl;
    cin>>decimal;
    base3(decimal);
}
void base3(int n)
{
if(n<3)
cout<<n;
else
{
    base3(n/3);
    cout<<n%3;

}
}