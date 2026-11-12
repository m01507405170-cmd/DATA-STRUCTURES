#include <iostream>
using namespace std;
int front =-1;
int rear =-1;
const int sz= 5;
int arr[sz];

bool en()
{
    if(rear == sz - 1)
    return true;
    else
    return false;
}
bool dequeue()
{
    if(front == -1)
    return true;
    else 
    return false;
}

void en(int value )
{
    if(en())
    {
        cout<<" is full "<<endl;
    }
else
{
rear++;
arr[rear]=value;

if(front == -1)
{
    front ++;
}  
}
}
void dequeue()
{
if(dequeue())
{
    cout<<"is empty "<<endl;
}
else{
    cout<<"delet "<<arr[front]<<endl;

    if(rear == front )
    {
        rear = front= -1;
}
else 
{
    front ++;
}
}
}
void dis()
{
    if(dequeue())
    {
        cout<<" is empty "<<endl;
    }
    else 
    {
        for(int i=front;  i<=rear;   i++)
        {
            cout<<arr[i]<<endl;
        }
    }
}

int get()
{
    if(dequeue())
    {
        cout<<"is empty"<<endl;
    }
    else{
        return arr[front];
    }
}

int set()
{
    if(dequeue())
    {
        cout<<"is empty"<<endl;
    }
    else{
        return arr[rear];
    }

}

int main()
{
dis();
en(23);
en(54);
en(5);
en(2);
en(65);
dequeue();
dequeue();
cout<<" get "<< get()<<endl;
cout<<" set "<< set()<<endl;
dis();


}
