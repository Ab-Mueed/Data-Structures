#include<iostream>
using namespace std;
void push(int x);
int pop();
void view(int i);
int stack[10],top=-1,item,choice;
int main()
{
	int i=0;
	
	while(1)
	{
		cout<<"\n1 For Push, 2 For Pop, 3 For View"<<endl;
		cin>>choice;
		if(choice==1)
		{
			i = i+1;
			cout<<"Enter Item"<<endl;
			cin>>item;
			push(item);
		} 
		if(choice==2)
		{
			cout<<pop();
		}
		if(choice==3)
		{
			
			view(i);
		}
		
	}
	
	
	
}
void push(int x)
{
	if(top>10)
	{
		cout<<"Overflow";
	}
	else
	stack[++top]=item;
}

int pop()
{
	if(top<0)
	{
		cout<<"UnderFlow";
		
	}
	else
	return stack[top--];
	
}

void view(int i)
{
	int j;
for(j=0;j<i;j++)
cout<<stack[j]<<" ";

}
