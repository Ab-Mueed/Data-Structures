#include<iostream>
using namespace std;
void create();
void view();
struct node{
    int data;
    node *next;

};
node *head=NULL, *tail=NULL;
int main()
{
    int ch;
   while(1)
   {
    
        cout << "\n1 For Create, 2 For View, 3 For  Insert, 4 For Exit: " << endl;
        cin >> ch;
        if (ch == 1)
            create();
        if (ch == 2)
            view();
       // if (ch == 3)
            //insert();
        if (ch == 4)
            break;
   }




}

void create()
{
 int n, i;
    struct node *temp;
    cout << "Enter Number of Nodes you want to create: " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        temp = (struct node *)new (struct node);
        cout << "Enter data For Node "<<i<<":" << endl;
        cin >> temp->data;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            //tail->next=temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
           // tail->next=head;
        }
    }
    tail->next=head;
}


void view()
{
    node *trav;
    trav=head;
    cout<<"To check if it is really a circular list: "<<tail->next->data;
    
    while(trav!=NULL)
    {
        cout<<trav->data<<" ";
        if(trav==tail)
        break;
        else
        trav=trav->next;
    }

}