#include <iostream>
#include <stack>
using namespace std;

bool pal(string str)
{
  int size = str.size();
  int mid = size / 2;

  stack<char> stk;

  for (int i = 0; i < mid; i++)
  {
    stk.push(str[i]);
  }

  if (size % 2 == 1)
  {
    mid++;
  }
  for (int i = mid; i < size; i++)
  {
    if (stk.top() != str[i])
    {
      return false;
    }
    stk.pop();
  }
  return true;
}

int main()
{
  string str;
  cout << " enter your name = ";
  cin >> str;
  if (pal(str))
  {
    cout << " yes planidrome " << endl;
  }
  else
  {
    cout << " no planidrome ";
  }
}
