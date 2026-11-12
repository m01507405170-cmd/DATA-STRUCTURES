#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
int top=-1;
 const int size = 5;
int arr[size];

void stack()
{
    int top =-1;
}

bool full()
{
    if(top == size -1)
    return true;
    else
    return false;
}
bool empty()
{
  if(top == -1)
    return true;
    else
    return false;
}
void push(int value)
{
    if(full())
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        top++;
        arr[top] = value;
    }
}
void pop ()
{
    if(empty())
    {
        cout<<" stack empty "<<endl;
    }
    else{
        cout<<" deled "<<arr[top]<<endl;
        top--;
    }
}
void dis()
{
    if(empty())
    {
        cout<<"stack empty "<<endl;
    }
    else
    {
        while(top!=-1)
        {
            cout<<arr[top]<<endl;
            top--;
        }
    }
}

int main()
{

dis();
push(5);
push(6);
push(4);
push(3);
pop();

dis();

dis();


}

