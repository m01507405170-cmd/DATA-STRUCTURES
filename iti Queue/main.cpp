#include <iostream>
using namespace std;

struct node
{

    int data;

    node *next = nullptr;
};

struct Queue
{
    node *front = nullptr;
    node *rear = nullptr;
};

void enqueue(int value, Queue *s)
{
    node *newnode = new node;
    newnode->data = value;
    newnode->next = nullptr;

    if (s->front == nullptr)
    {
        s->front = newnode;
        s->rear = newnode;
    }
    else
    {
        s->rear->next = newnode;
        s->rear = newnode;
    }
}

void dis(Queue *s)
{
    node *currnt = s->front;
    while (currnt != nullptr)
    {
        cout << currnt->data << endl;
        currnt = currnt->next;
    }
}

int dequeue(Queue *s)
{
    node *deletnode = s->front;

    if (deletnode != nullptr)
    {
       // node *deletnode = s->front;
        int tump = deletnode->data;
        s->front = s->front->next;


        delete deletnode;

        return tump;
    }
    else
    {
        cout << " is empty ";
        return 0;
    }
}
int main()
{
    Queue s;
    enqueue(10, &s);
    enqueue(20, &s);
    enqueue(30, &s);
    enqueue(80, &s);
    dis(&s);

   cout<<" deq "<< dequeue(&s)<<endl;
    cout<<" deq "<< dequeue(&s);

        dis(&s);

}
