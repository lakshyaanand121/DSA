#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insert(node *&head, int value)
{
    node *newnode = new node;
    newnode->data = value;
    newnode->next = head;

    head = newnode;
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

    cout << "before insertion" << endl;
    display(head);

    insert(head, 5);
    cout << "after insertion" << endl;
    display(head);

    return 0;
}