#include <iostream>
#include <queue>
using namespace std;

int main()
{
   queue<int> s1 , temp;
   int x , count=0,  sh,  found=-1;

   for(int i=0;   i<5;   i++)
   {
       cout<<"enter your number ";
       cin>>x;

        s1.push(x);

   }

   while(s1.empty())
   {
       int mid = s1.front();
       s1.pop();
       if(mid == sh && found ==-1)
       {
           found = count ;

       }
       count ++;
   }

if(found =-1)

{
    cout<< " no found "<< count <<endl;
    else
    {
        cout<<" indix "<< found <<endl;
    }
}









}
