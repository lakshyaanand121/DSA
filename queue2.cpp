#include <iostream>
using namespace std;
#define max 5
int queue[max];
int front = -1;
int rear = -1;
void enqueue()
{
    int item;
    if (rear == max - 1)
    {
        cout << "queue overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        cout << "enter element" << endl;
        cin >> item;
        rear++;
        queue[rear] = item;
        cout << item << " is inserted in queue" << endl;
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "queue underflow" << endl;
    }
    else
    {
        cout << "deleted";
        front++;
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}
void display()
{
    if (front == -1 || front > rear)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue elements are" << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i];
        }
        cout << endl;
    }
}
int main()
{
    int choice;
    do
    {
        cout << endl
             << "1.enqueue" << endl;
        cout << endl
             << "2.dequeue" << endl;
        cout << endl
             << "3.display" << endl;
        cout << endl
             << "4.exit" << endl;
        cout << endl
             << "5.enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "program ended";
            break;

        default:
            cout << "invalid choice";
        }
    } while (choice != 4);
    return 0;
}