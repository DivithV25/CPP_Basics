#include <iostream>
using namespace std;
#define MAX 5
int stack[MAX];
int top = -1;
void display()
{
    if (top == -1)
    {
        cout << "Empty stack";
        return;
    }
    int i;
    for (i = top; i != -1; i--)
    {
        cout << stack[i] << endl;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    top = top - 1;
}
void push(int x)
{
    if (top == MAX - 1)
    {
        cout << "Overflow" << endl;
        return;
    }
    top = top + 1;
    stack[top] = x;
}
int main()
{
    int ch;
    while (1)
    {
        cout << "enter the operation to be preformed" << endl;
        cout << "1.push" << endl
             << "2.pop" << endl
             << "3.display" << endl
             << "4.exit";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int x;
            cout << "enter the element to be pushed";
            cin >> x;
            push(x);
            break;

        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            break;
        }
    }
}