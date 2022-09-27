#include<iostream>
#include<stdlib.h>
using namespace std;
void push(int item);
int pop();
void view();
struct node{
	int item;
	struct node *next;
};
struct node *top=NULL,*temp;
int main()
{
	int ch;
	int item;
	while(1)
	{
		cout<<"\n1 For Push, 2 For Pop, 3 For View, 4 For Exit"<<endl;
		cin>>ch;
		if(ch==1){
			cout<<"Enter element to push"<<endl;
			cin>>item;
			push(item);
		}
		else if(ch==2){
			
		item = pop();
		
		if(item==-1)
		cout<<"Underflow";
		else
		cout<<item<<" ";	
		}
		else if(ch==3){
		view();	
		}
		if(ch==4) break;
		
	}
	
	
	
}
void push(int item){
	struct node *temp;
	temp=(struct node*)new(struct node);
	temp->next=NULL;
	temp->item=item;
	if(top==NULL)
	{
		top=temp;
	}
	else
	{
		temp->next=top;
		top=temp;
		
	}
}

int pop()
{
	int item;
    
	if(top==NULL)
	return -1;
	else
	{
		item=top->item;
		temp=top;
		top=top->next;
		free(temp);
		return item;
		
	}
}

void view(){
	struct node *trav;
	if(top==NULL)
	cout<<"Stack is empty";
	else
	{
		trav=top;
		while(trav!=NULL)
		{
			cout<<trav->item;
			trav=trav->next;
		}
	}
}
