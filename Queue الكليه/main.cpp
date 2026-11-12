#include <iostream>
using namespace std;
const int size=5;
int arr[size];
int front = -1;
int rear = -1;

void delet()
{
    front = rear=-1;
}
void enqueue(int value)
{
    if(rear == size - 1)

        cout<<" is full "<<endl;
 else

 rear++;
 arr[rear]= value;
 if(front = -1)
 else
    front++;

}

void dequeue()
{
    if(front == -1)

        cout<<" is empty "<<endl;

        else

        cout<<" delet "<<arr[front]<<endl;
        if(rear == front )
 front = rear =-1;
      else
      front ++;

}
void dis()
{
    if(front == -1)

        cout<<"is empty "<<endl;

   else

   for(int i=front;   i<=rear;  i++)

   cout<<arr[i]<<endl;

}
int get ()
{
    if(rear == -1)
    cout<<" is empty "<<endl;
    else
    return arr[front];

}
int set ()
{
    if(rear == -1)
    cout<<" is empty "<<endl;
    else

    return arr[rear];
}


int main()
{
    dis();
    enqueue(12);
    enqueue(19);
    enqueue(32);
    enqueue(43);
    enqueue(42);
    dis();
    dequeue();
    dequeue();
    dis();

}

