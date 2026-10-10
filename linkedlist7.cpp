#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void insertfromfront(node *&head, int value)
{
    node *newnode = new node;

    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void insertionfromend(node *&head, int value)
{
    node *newnode = new node;
    newnode->data = value;
    newnode->next = NULL;

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void delfromfront(node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}

void delfromend(node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty";
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void display(node *head)
{
    if (head == NULL)
    {
        cout << "list is empty";
        return;
    }

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node *head = NULL;
    int choice, value;

    do
    {
        cout << "'''singly linked list menu'''" << endl;
        cout << "1.insert at front" << endl;
        cout << "2.insert at end" << endl;
        cout << "3.delete from front" << endl;
        cout << "4.delete from end" << endl;
        cout << "5.display" << endl;
        cout << "6.exit" << endl;
        cout << "enter choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter value" << endl;
            cin >> value;
            insertfromfront(head, value);
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
            display(head);
            break;

        case 6:
            cout << "program ended" << endl;
            break;

        default:
            cout << "invalid choice" << endl;
            break;
        }
    } while (choice != 6);
    return 0;
}