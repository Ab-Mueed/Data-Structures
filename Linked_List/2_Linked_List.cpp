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
        cout << "\n1 For Create, 2 For View, 3 For  Insert, 4 For Exit: " << endl;
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

void insert()
{
    struct node *trav, *temp, *trav2, *trav3;
    int value, choice, flag = 0;
    trav = head;
    trav2 = head;
    trav3 = head;
    temp = (struct node *)new (struct node);
    temp->next = NULL;
    cout << "Enter the Node Data after/before which you want to Insert the Node: " << endl;
    cin >> value;
    cout << "Checking if The Node Actually Exists or Not........." << endl;
    while (trav2->next != NULL)
    {
        if (trav2->data == value)
        {
            cout << "Node found"<<endl;
            flag = 1;
            break;
        }
        trav2 = trav2->next;
    }
    if (flag == 0)
        cout << "Node does not Exist"<<endl;
    else
    {
        cout << "Enter the data for New Node: " << endl;
        cin >> temp->data;

        cout << "1 For Insertion after, 2 For Insertion Before: " << endl;
        cin >> choice;
        if (choice == 1)
        {
            while (trav->data != value)
                trav = trav->next;
            temp->next = trav->next;
            trav->next = temp;
        }
        else                                      // For Insertion Before
        {
            while (trav->data != value)
                trav = trav->next;
            while (trav3->next != trav)
            {
                trav3 = trav3->next;
            }

            temp->next = trav;
            trav3->next = temp;
        }
    }
}