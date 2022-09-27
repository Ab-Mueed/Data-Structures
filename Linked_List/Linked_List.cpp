#include <iostream>
using namespace std;
void create();
void view();
void insert();
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
        cout << "1 For Create, 2 For View, 3 For  Insert, 5 For Exit: "<<endl;
        cin >> ch;
        if (ch == 1)
            create();
        if (ch == 2)
            view();
        if (ch == 3)
            insert();
        if (ch == 4)
            break;
    }
}

void create()
{
    int n, i;
    struct node *temp;
    cout << "Enter Number of Nodes you want to create: "<<endl;
    cin >> n;
    for (i = 0; i < n; i++) // 0
    {
        temp = (struct node *)new (struct node);
        cout << "Enter data: "<<endl;
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
        cout << trav->data<<" ";
        trav = trav->next;
    }
}

void insert()
{
    struct node *trav, *temp;
    int value;
    trav = head;
    temp = (struct node *)new (struct node);
    temp->next = NULL;
    cout << "Enter the data for New Node: "<<endl;
    cin >> temp->data;
    cout << "Enter the Node Data after which you want to Insert the Node: "<<endl;
    cin >> value;
    while (trav->data != value)
        trav = trav->next;
    temp->next = trav->next;
    trav->next = temp;
}