#include <iostream>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
};

void insertionfromfront(node *&head, int value)
{
    node *newnode = new node;
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL)
    {
        head->prev = newnode;
    }
    head = newnode;
}

void insertionfromend(node *&head, int value)
{
    node *newnode = new node;
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void delfromfront(node *&head)
{
    if (head == NULL)
    {
        cout << "empty";
        return;
    }
    node *temp = head;
    head = head->next;
    if (head != NULL)
    {
        head->prev = NULL;
    }
    delete temp;
}

void delfromend(node *&head)
{
    if (head == NULL)
    {
        cout << "empty";
        return;
    }

    if (head->next = NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}

void displayfromfront(node *head)
{
    if (head == NULL)
    {
        cout << "empty";
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayfromback(node *head)
{
    if (head == NULL)
    {
        cout << "empty";
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    int choice, value;

    do
    {
        cout << "'''doubly linked list menu'''" << endl;
        cout << "1.insert at front" << endl;
        cout << "2.insert at end" << endl;
        cout << "3.delete from front" << endl;
        cout << "4.delete from end" << endl;
        cout << "5.display from front" << endl;
        cout << "6.display from end" << endl;
        cout << "7.exit" << endl;
        cout << "enter choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter value" << endl;
            cin >> value;
            insertionfromfront(head, value);
            break;

        case 2:
            cout << "enter value" << endl;
            cin >> value;
            insertionfromend(head, value);
            break;

        case 3:
            delfromfront(head);
            break;

        case 4:
            delfromend(head);
            break;

        case 5:
            displayfromfront(head);
            break;

        case 6:
            displayfromback(head);
            break;

        case 7:
            cout << "program ended" << endl;
            break;

        default:
            cout << "invalid choice" << endl;
            break;
        }
    } while (choice != 7);

    return 0;
}