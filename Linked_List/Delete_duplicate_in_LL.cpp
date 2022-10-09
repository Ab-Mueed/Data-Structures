#include <iostream>
using namespace std;
void create();
void view();
void dupdel();

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;
int main()
{
    int ch;
    while (1)
    {
        cout << "\n1 For Create, 2 For View, 3 For Deleting Duplicates, 4 For Exit: " << endl;
        cin >> ch;
        if (ch == 1)
            create();
        if (ch == 2)
            view();
        if (ch == 3)
           dupdel();
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
    for (i = 1; i <= n; i++) // 0
    {
        temp = (struct node *)new (struct node);
        cout << "Enter data For Node "<<i<<":" << endl;
        cin >> temp->data;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
}

void view()
{
    struct node *trav;
    trav = head;
    while (trav != NULL)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
}

void dupdel()
{
    node *p = head;
    node *q = p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete(q);
            q=p->next;
        }
    }
}