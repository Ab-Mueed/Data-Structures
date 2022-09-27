#include <iostream>
#include <stdlib.h>
using namespace std;
void create();
void view();
void insert();
void del();
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
        cout << "1 For Create, 2 For View, 3 For  Insert, 4 For Delete, 5 For Exit: " << endl;
        cin >> ch;
        if (ch == 1)
            create();
        if (ch == 2)
            view();
        if (ch == 3)
            insert();
        if (ch == 4)
            del();
        if (ch == 5)
            break;
    }
}

void create()
{
    int n, i;
    struct node *temp;
    cout << "Enter Number of Nodes you want to create: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        temp = (struct node *)new (struct node);
        cout << "Enter data: " << endl;
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

void insert()
{
    struct node *trav, *temp;
    int value;
    trav = head;
    temp = (struct node *)new (struct node);
    temp->next = NULL;
    cout << "Enter the data for New Node: " << endl;
    cin >> temp->data;
    cout << "Enter the Node Data after which you want to Insert the Node: " << endl;
    cin >> value;
    while (trav->data != value)
        trav = trav->next;
    temp->next = trav->next;
    trav->next = temp;
}

void del()
{
    int element;
    node *temp, *trav;
    trav = head;
    cout << "Enter the Element to delete: ";
    cin >> element;
    if (head->data == element)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        while (trav->next->data != element)
            trav = trav->next;
        temp = trav->next;
        if(trav->next==tail)
        {
            trav->next == NULL;
            free(temp);
        }
        else
        {
            trav->next = trav->next->next;
        free(temp);
        }
    }
}