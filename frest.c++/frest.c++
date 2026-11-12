#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int const size = 5;
int front = -1;
int rear = -1;
int arr[size];

void delet()
{
    front = rear = -1;
}

void en(int value)
{
    if (rear == size - 1)
    {
        cout << " is full " << endl;
    }
    else
    {
        // raer++;
        arr[++rear] = value;
        if (front == -1)
        {
            front = 0;
        }
    }
}

void de()
{

    if (front == -1)
    {
        cout << " is empty " << endl;
    }
    else
    {
        front++;
        cout << "delet " << arr[front] << endl;

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }

    void dis()
    {
        if (front == -1)
        {
            cout << "is empty " << endl;
        }
        else
        {
            for (int i = front; i <= size; i++)
            {
                cout << arr[i];
            }
        }
    }

    int get()
    {
    }
}
