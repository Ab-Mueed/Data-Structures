#include<iostream>
using namespace std;
int main()
{
    int a[20], index,size,i,element;
    cout<<"Enter the size of Array"<<endl;
    cin>>size;
    cout<<"Enter the Elements of Array"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"printing the array"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter the element to insert"<<endl;
    cin>>element;
    cout<<"Enter the index where to insert the element"<<endl;
    cin>>index;
    for(i=size;i>index;i--)
    {
        a[i]=a[i-1];

    }
    a[index]=element;
     for(i=0;i<size+1;i++)
    {
       cout<<a[i]<<" ";

    }
    return 0;

}