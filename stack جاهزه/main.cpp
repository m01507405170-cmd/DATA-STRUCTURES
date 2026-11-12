#include <iostream>
#include<stack>
using namespace std;

int main()
{

stack <string> str , temp;
str.push("yello");
str.push("red");
str.push("green");
str.push("black");

while (!str.empty())
{
  string candy = str.top();
  if(candy != "red" && candy !="black" )
  {
    temp.push(candy);

  }
 str.pop();
}
while (!temp.empty())
{
  str.push(temp.top());
  temp.pop();
}

while(!str.empty())
{


cout<<str.top()<<endl;
str.pop();

}


/*
#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
    stack<int> hoda, temp;
    int x;

    for (int i = 0; i <= 5; i++)
    {
        cout << " enter your number = ";
        cin >> x;
        hoda.push(x);
    }

    while (!hoda.empty())
    {
        if (hoda.top() != 22 && hoda.top() != 50)
        {

            hoda.pop();
        }
        else
        {

            cout << hoda.top() << endl;
            hoda.pop();
        }
    }
}
//////////////////////////////////////////////////////////////////
#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> numbers , temp;
  cout<<" welcom  "<<endl;

numbers.push(12);
numbers.push(7);
numbers.push(20);
numbers.push(9);
numbers.push(14);
numbers.push(5);
numbers.push(18);
numbers.push(3);

while(!numbers.empty())
{
    int cand = numbers.top();

if(cand % 2==0 )
{
    temp.push(cand);
}
{
numbers.pop();
}
}
while(!temp.empty())
{
    numbers.push(temp.top());
    temp.pop();
}
while(!numbers.empty())
{
    cout<<numbers.top()<<endl;
    numbers.pop();
}
}

 ///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stack>
using namespace std;




int main()
{
    stack <int> hod , temp ;
    hod.push(12);
    hod.push(13);
    hod.push(14);
    hod.push(15);
    hod.push(16);
    hod.push(17);
    hod.push(18);

    while (!hod.empty())
    {
        int candy = hod.top();

        if(candy %2==0 && candy != 18 )
        {
            temp.push(candy);
        }
        hod.pop();
    }
    while(!temp.empty())
    {

        hod.push(temp.top());
        temp.pop();
    }

    while(!hod.empty())
    {
        cout<<hod.top()<<endl;
        hod.pop();
    }


/////////////////////////////////////////////////////////////////

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> hod , temp ;
    int a , b , c , d , e, f;
    cout<<"enter your number 1 = ";
    cin>>a;
    cout<<"enter your number 2 = ";
    cin>>b;
    cout<<"enter your number 3 = ";
    cin>>c;
    cout<<"enter your number 4 = ";
    cin>>d;
    cout<<"enter your number 5 = ";
    cin>>e;
    cout<<"enter your number 6 = ";
    cin>>f;
    hod.push(a);
    hod.push(b);
    hod.push(c);
    hod.push(d);
    hod.push(e);
    hod.push(f);
    cout<<" number is even ? "<<endl;

    while (!hod.empty())
    {
        int candy = hod.top();

        if(candy %2==0 && candy != 18 )
        {
            temp.push(candy);
        }
        hod.pop();
    }
    while(!temp.empty())
    {

        hod.push(temp.top());
        temp.pop();
    }

    while(!hod.empty())
    {
        cout<<hod.top()<<endl;
        hod.pop();
    }
}

}
///////////////////////////////////////////////////////////////
#include <iostream>
#include <stack>
#include<cstring>
using namespace std;

int main()
{
    stack <string> s1,s2;
    string x;
    for(int i=0;  i<5 ;  i++)
    {
        cout<<" enter your name ";
        cin>>x;
        s1.push(x);
    }
    while(!s1.empty())
    {
if(s1.top() != "mahmoud")
{
    s2.push(s1.top());
}
s1.pop();

    }

    while(!s2.empty())
    {
      s1.push(s2.top());
      s2.pop();
    }

    while (!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();

    }

}
*/










}
