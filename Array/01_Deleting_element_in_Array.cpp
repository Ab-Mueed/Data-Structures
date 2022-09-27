#include<iostream>
using namespace std;
int scan(int b[], int n);
int display(int c[], int x);

int main()
{
    int a[20], size, element, item, i;
    cout<<"Enter the size of Array(Max 20): "<<endl;
    cin>>size;
    cout<<"Enter the Elements of Array: "<<endl;
    scan(&a[0],size);
    cout<<"The Entered Array is: "<<endl;
    display(&a[0], size);
    cout<<"\nEnter the Element to be deleted: "<<endl;
    cin>>element;
    for(i=0;i<size;i++)
    {
        if(a[i]==element)
        {
            a[i]= -1;
            break;
        
        }
    }
    cout<<"Displaying Array after Deleting the Given Element: "<<
    display(&a[0], size);
    return 0;



}

int scan(int b[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
     cin>>b[i];
    }
}

int display(int c[], int x)
{
    int j;
    for(j=0;j<x;j++)
    {
        cout<<c[j]<<" ";
    }
}