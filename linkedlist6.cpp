#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void delfromend(node *&head)
{
    if (head == NULL)
    {
        cout << "empty";
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
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    node *head = new node;
    node *second = new node;
    node *third = new node;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    cout << "before deletion" << endl;
    display(head);

    delfromend(head);
    cout << "after deletion" << endl;
    display(head);

    return 0;
}