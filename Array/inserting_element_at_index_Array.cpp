#include<iostream>
using namespace std;
int main()
{
    int a[20],index,size,i,element;
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"Enter elements of array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
        }
        cout<<"Enter the element to insert";
        cin>>element;
        cout<<"Enter the index";
        cin>>index;
        for(i=size;i>index;i--){
            a[i]=a[i-1];

        }
        a[index]= element;
        for(i=0;i<=size;i++)
        {
            cout<<a[i]<<" ";

        }
    }