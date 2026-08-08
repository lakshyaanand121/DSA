#include <iostream>
using namespace std;
#define max 5
int queue[max];
int front = -1;
int rear = -1;
void enqueue()
{
    int item;
    if ((rear + 1) % max == front)
    {
        cout << "queue overflow";
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % max;
    }
    cout << "enter item" << endl;
    cin >> item;
    queue[rear] = item;
}
void display()
{
    if (front == -1)
    {
        cout << "queue empty" << endl;
    }
    int i = front;
    while (true)
    {
        cout << queue[i] << " ";
        if (i == rear)
        {
            break;
        }
        i = (i + 1) % max;
    }
    cout << endl;
}
int main()
{
    int choice;
    do
    {

        cout << "1.enqueue" << endl;
        cout << "2.display" << endl;
        cout << "enter choice" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            enqueue();
            break;

        case 2:
            display();
            break;
        }
    } while (choice != 2);
    return 0;
}