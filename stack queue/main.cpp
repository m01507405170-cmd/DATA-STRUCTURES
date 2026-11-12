#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main()
{

  stack<int>s1 , temp;
int x;

for(int i=0;  i<6;  i++)
{
    cout<<" enter your number = ";
    cin>>x;
    s1.push(x);
}
  //  int s2 = s1.top();

while (!s1.empty())
{

    if( s1.top() %2==0 && s1.top() != 4)
{
    temp.push(s1.top());
s1.temp();
}
else{
    s1.pop();
}
}
while (!temp.empty())
{
    s1.push(temp.top());
    temp.pop();

}
while (!s1.empty())
{
    cout<<s1.top()<<endl;
    s1.pop();
}








}
