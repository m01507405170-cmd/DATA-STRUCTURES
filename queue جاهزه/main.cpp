#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
queue<int> qe , temp;
int x;

for(int i=0;   i<5;   i++)
{
    cout<<" enter your number ";
    cin>>x;
    qe.push(x);

}

while(!qe.empty())
{
    int s1 = qe.front() ;

    if(s1 % 2==0 )
    {
   temp.push(s1);

qe.pop();
    }
else
{
    qe.pop();
}
    }

    while (!temp.empty())
    {
        qe.push(temp.front());
        temp.pop();

    }

    while (!qe.empty())
    {
        cout<<qe.front()<<endl;
        qe.pop();
}












}
