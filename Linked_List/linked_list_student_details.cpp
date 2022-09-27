#include<iostream>
#include<stdlib.h>
using namespace std;
void create();
void view();
struct node{
    int roll;
    int marks;
    char dept[4];
    char name[10];
    node *next;
};
node *head=NULL,*tail=NULL;
int main()
{
    int ch;
    while(1)
    {
        cout<<"1 For Create, 2 For View, 3 For Exit: "<<endl;
        cin>>ch;
        if(ch==1)
        create();
        if(ch==2)
        view();
        if(ch==3)
        break;
    }

}

void create()
{
    int number;
    node *temp;
    cout<<"Enter no. of students/nodes: "<<endl;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        temp=(struct node*)new(struct node);
        cout<<"Enter Student detail: "<<endl;
        cout<<"Name: "<<endl;
        cin>>temp->name;
        cout<<"Dept: "<<endl;
        cin>>temp->dept;
        cout<<"Roll: "<<endl;
        cin>>temp->roll;
        cout<<"Marks: "<<endl;
        cin>>temp->marks;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;

        }
        else
        {
            tail->next=temp;
            tail=temp;
        }


    }

}

void view()
{
    node *trav;
    trav=head;
    while(trav!=NULL)
    {
        cout<<trav->name<<" "<<trav->dept<<" "<<trav->roll<<" "<<trav->marks<<endl;
        trav = trav->next;
    }
}