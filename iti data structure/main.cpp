
#include <iostream>
using namespace std;

struct node
{
    int value = 0;
    node* next;
};

node* head = nullptr;

void insertnode(int data)
{
    node* last;
    node* newnode;
    newnode = new node;
    newnode->value=data;
    newnode->next=nullptr;

    if(head == nullptr)
    {
        head = newnode;

    }
    else
    {
        last = head;
        while(last->next != nullptr)
{
    last = last->next;

}
last->next=newnode;
    }
}
    void display()
    {
        node* currntnode;
        currntnode=head ;
        if(currntnode == nullptr)
        {
            cout<<" linked list is empty "<<endl;
        }
else
        {
            while(currntnode !=nullptr)
            {
            cout<<currntnode->value<<endl;
            currntnode=currntnode->next;
            }
        }


    }
    bool searsh ( int key)
    {
node* m;
m = head;
while(m != nullptr)
{
    if(m->value == key)
    {
    return true;
    }
    else{
        return false;
    }
}


    }
void deleted (int x)
{
node* x = nullptr;
if(head == nullptr )
{
    cout<<" is empty "<<endl;
}




}

int main()
{


display();
insertnode(12);
insertnode(14);
insertnode(19);

display();



    return 0;
}
