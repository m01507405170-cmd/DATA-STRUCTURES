#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
struct node
{
    int value = 0;
    node* next;
};
node* head = nullptr;

void insertnode(int data)
{
    node* newnode;
    newnode = new node;
    newnode->value = data;
    newnode->next=nullptr;

    if(head == nullptr)
    {
        head = newnode;

    }
    else{
         node* last = head;
       while(last->next !=nullptr)
       {
         last = last->next;
       }
         last->next = newnode;
       }

    }

    void display()
    {

node* currntnode;
currntnode = head;
 if(currntnode == nullptr)
 {

cout<<"linked list empty "<<endl;
 }
else
{
    while(currntnode != nullptr)
    {
cout<<currntnode ->value<<endl;
        currntnode = currntnode ->next;
}
}
}

int main(){


display();
insertnode(23);
insertnode(8);
insertnode(5);
insertnode(2);

display();

}

