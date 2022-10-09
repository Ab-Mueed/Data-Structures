#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL, *trav, *temp;

void create()
{
    int n;
    cout << "Enter no. of nodes to insert: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        temp = (struct node *)new (struct node);
        cout << "Enter data: ";
        cin >> temp->data;
        temp->left = NULL;
        temp->right = NULL;
        if (root == NULL)
        {
            root = temp;
        }
        else
        {
            trav = root;
            while (1)
            {
                if (temp->data < trav->data)
                {
                    if (trav->left == NULL)
                    {
                        trav->left = temp;
                        break;
                    }
                    else
                    {
                        trav = trav->left;
                    }
                }
                else if (temp->data > trav->data)
                {
                    if (trav->right == NULL)
                    {
                        trav->right = temp;
                        break;
                    }
                    else
                    {
                        trav = trav->right;
                    }
                }
                else
                {
                    cout << "Dublicate elements not allowed";
                }
            }
        }
    }
}

void search(int item)
{ 
    trav = root;
    int flag =0;
    while(trav!=NULL)
    {
        if(trav->data==item)
        {
            cout<<"Item Found"<<endl;
            flag=1;
            break;
        }
        else if(item<trav->data)
        {
            trav= trav->left;
        }
        else if(item>trav->data)
        {
            trav=trav->right;
        }
    }
    if(flag==0)
    {
        cout<<"Element not Found"<<endl;
    }
}

int main()
{
    int choice,element;
    while (1)
    {
        cout << "\n1 For Create or 2 For Searching an Element or 3 For Exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            create();
        }
        if(choice == 2)
        {
            cout<<"Enter the Element you want to Search: ";
            cin>>element;
            search(element);
        }
        if(choice==3)
        break;
            

    }
}