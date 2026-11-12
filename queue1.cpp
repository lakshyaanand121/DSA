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
             << "1.enqueue";
        cout << endl
             << "2.display";
        cout << endl
             << "3.exit";
        cout << endl
             << "4.enter your choice";
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            display();
            break;

        case 3:
            cout << "program ended";
            break;

        default:
            cout << "invalid choice";
        }
    } while (choice != 3);
    return 0;
}