#include <iostream>

using namespace std;

struct node
{
  int data;
  node *left = nullptr;
  node *right = nullptr;
};

struct tree
{
  node *root = nullptr;
};

void add(int value, tree *s)
{
  node *newnode;
  newnode = new node;
  newnode->data = value; //

  if (s->root = nullptr)
  {

    s->root = newnode;
  }
  else
  {
    node *currnt = s->root;
    node *parent = s->root;
    while (currnt != nullptr)
    {
      parent = currnt;
      if (value > currnt->data)
      {
        currnt = currnt->right;
      }
      else
      {
        currnt = currnt->left;

        if (value > parent->data)
        {
          parent->right = newnode;
        }
        else
        {
          parent->left = newnode;
        }
      }
    }
  }


node* search(tree *s, int value)
{
    node *currnt = s->root;

    while (currnt != nullptr)
    {
        if (currnt->data == value)
            return currnt;

        if (value > currnt->data)
            currnt = currnt->right;
        else
            currnt = currnt->left;
    }

    return nullptr;
}

void dis(node *s)
{
    if (s == nullptr)
        return;

    dis(s->left);
    cout << s->data << " ";
    dis(s->right);
}

void traverse(tree *s)
{
    dis(s->root);
    cout << endl;
}

node* deleteNode(node *s, int value)
{
    if (s == nullptr)
        return ;

   
    else
    {
        if (s->left == nullptr && s->right == nullptr)
        {
            delete s;
            return ;
        }
        else if (s->left == nullptr)
        {
            node *temp = s->right;
            delete s;
            return temp;
        }
        else if (s->right == nullptr)
        {
            node *temp = s->left;
            delete s;
            return temp;
        }

        node *temp = s->right;

        while (temp->left != nullptr)
        {
            temp = temp->left;
        }

        s->data = temp->data;
        s->right = deleteNode(s->right, temp->data);
    }

    return s;
}

void de(tree *s, int value)
{
    s->root = deleteNode(s->root, value);
}

int main()
{
    tree t;

    add(&t, 50);
    add(&t, 30);
    add(&t, 70);
    add(&t, 20);
    add(&t, 40);
    add(&t, 60);
    add(&t, 80);
}
