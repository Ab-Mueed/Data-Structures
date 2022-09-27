#include<iostream>
using namespace std;
long int fac(int n);
int main()
{
int number;
long int f;
cout<<"Enter the Number of which to find Factorial: ";
cin>>number;
f = fac(number);
cout<<number<<"! = "<<f;
return 0;

}
long int fac(int n)
{
    if(n==0)
    return 1;
    else
    return n*fac(n-1);
}