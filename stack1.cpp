#include <iostream>
using namespace std;
#define MAX 5
int stack[MAX];
int top = -1;
void push()
{
    int item;
    if (top == MAX - 1)
        cout << "stack overflow" << endl;
    else
            cout << "enter element" << endl;
            cin >> item;
            top++;
            stack[top] = item;
            cout << item << " inserted into stack"<<endl;;
        
}
    void display()
    {
        if (top == -1)
            cout << "stack underflow" << endl;
        else
            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << endl;
            }
    }
    int main()
    {
        int choice;
        do{
        cout << "1.push" << endl;
        cout << "2.display" << endl;
        cout << "3.exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            display();
            break;

        case 3:
            cout << "exit";
            break;
        default:
            cout << "invalid choice";
        
        }
    }
    while(choice !=3);
     return 0;
    }
