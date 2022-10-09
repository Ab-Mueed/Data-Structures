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

int main()
{
    int choice;
    while (1)
    {
        cout << "1 For Create or Anything else for Exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            create();
        }
        else
            break;
    }
}