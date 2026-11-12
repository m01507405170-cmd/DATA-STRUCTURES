
#include <iostream>
using namespace std;

struct node
{
    int value = 0;
    node *next;
};
node *head = nullptr;

void insertnode(int data)
{
    node *newnode;
    newnode = new node;
    newnode->value = data;
    newnode->next = nullptr;

    if (head == nullptr)
    {
        head = newnode;
    }
    else
    {
        node *last = head;

        while (last->next != nullptr)
        {
            last = last->next;
        }
        {
            last->next = newnode;
        }
    }
}

bool serch(int se )
{
    node* eldeeb = head;
    while(eldeeb != nullptr)
    {


    if (eldeeb->value== se)
    {
        return true;
    }
    eldeeb = eldeeb->next;

    {

        return false;
    }

}
}






void display()
{

    node *currnt;
    currnt = head;

    if (currnt == nullptr)
    {
        cout << " is empty " << endl;
    }
    else
        while (currnt != nullptr)
        {
            cout << currnt->value << endl;
            currnt = currnt->next;
        }
}


int main()
{

    display();
    insertnode(43);
    insertnode(4);
    insertnode(45);
    display();
}
