#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insertatend(node *&head, int value)
{
    node *newnode = new node;
    newnode->data = value;
    newnode->next = NULL;

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next=newnode;
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

    cout << "before insertion" << endl;
    display(head);

    insertatend(head, 5);
    cout << "after insertion" << endl;
    display(head);

    return 0;
}