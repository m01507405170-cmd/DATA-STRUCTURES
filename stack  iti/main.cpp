#include <iostream>
using namespace std;

struct Stack{
int arr[5];
 int Top =-1;
};


 void Push(Stack *S,int value)
 {
    if(S->Top < 4)
    {
     S->Top++;

     S->arr[S->Top]=value;
    }
    else{
        cout <<"Stack is full";
    }
 }


 void Display(Stack * S)
 {
     if(S->Top ==-1)

        cout<<"empty";

     else{


     while(s->top != -1)
     {
         cout<<S->arr[top]<<"\t";
     }
     cout<<endl;}
 }

void Pop(Stack * S)
{
    if(S->Top==-1)
        cout<<"Stack is empty";
    else{

        S->Top--;
    }

}

int Peak(Stack * S,int *Data)
{
    if(S->Top ==-1){
         cout<<"Empty";
        return -1;
    }
    else{
         *Data=S->arr[S->Top];
        return S->arr[S->Top];
    }

}


int main()
{

    Stack s;
    Push(&s,400);
    Push(&s,300);
    Push(&s,200);
    Push(&s,100);
    Display(&s);
    Pop(&s);
    Display(&s);
    int Data=0;
    Peak(&s,&Data);
    cout<<Data;
    return 0;
}




/*




#include <iostream>

using namespace std;
int top=-1;
const int sz=5;
int arr[sz];
void clearStack(){
top=-1;
}
//ŞÈá ãÇ ÇÍĞİ ÇáÚäÕÑ ÇÔæİ İ ÚäÇÕÑ ÇÕáÇ İ ÇáÇÓÊÇß æáÇ İÇÖíå
bool EmptyStack(){
if(top==-1) return true;
 return false;
}
//ŞÈá ãÇÖíİ ÚäÕÑ ÇÔæİ İ ãßÇä æáÇ ÇáÇÓÊÇß ÇÊãáÊ
bool fullStack(){
if(top==sz-1) return true;
 return false;
}
// ÇÖíİ ÚäÕÑ
void push(int x){ // áíå ÇäÊÌÑ ÚáÔÇä ÇáÇÓÊÇß ÇáÏÇÊÇ ÊÇíÈ ãÚãæáå ÇäÊÌÑ İÈÊŞÈá ÈÓ ÇäÊÍÑ

    // call fullStack -->áæ ÑÌÚÊ ÊÑæ ßÏå ÇáÇÓÊÇß ÇÊãáÊ İåØÈÚ ãÓÌ ÇäåÇ ãáíÇäå
    if(fullStack()) cout<<"stack overflow"<<endl;

   // áæÑÌÚÊ İæáÓ ßÏå İ ãßÇä İ ÇáÇÓÊÇß
    else{
        //ÇÒæÏ Şíãå ÇáÊæÈ ÈÏá -1 åÊÈŞí 0  æÈÚÏåÇ 1 æÈÚÏåÇ 2 æåßĞÇ ßá ãÑå íÍÕá ßæá ááİÇäßÔä ÊÒíÏ 1
        top++;
    //İíãå ÇáÇÑÇí Çİ ÇáÊæÈ ÈÚÏ ÒíÇÏå ÇáÊæÈ =Şíãå ÇáÇßÓ ÇáãÈÚæÊå
        arr[top]=x;
    }

}
void pop(){

    // call EmptyStack -->áæ ÑÌÚÊ ÊÑæ ßÏå ÇáÇÓÊÇß İÇÖíå æãİíÓ ÚäÇÕÑ ÊÊÍĞİ  İåØÈÚ ãÓÌ ÇäåÇ İÇÖíå
    if(EmptyStack()) cout<<"stack underflow"<<endl;
    else{
        //åØÈÚ Şíãå ÇáÚäÕÑ Çááí ÇÊÍĞİ ŞÈá ãÇÍÑß ÇáÊæÈ ÎØæå áÊÍÊ
        cout<<"the delete element is "<<arr[top]<<endl;
            // ÇäŞÕ Şíãå ÇáÊæÈ ÈÏá ãåæ ÈÊÔÇæÑ Ú ÇáÚäÕÑ 3 ÊÈŞí ÈÊÔÇæÑ Ú ÚäÕÑ 2 ßÏå ÚäÕÑ 3 ÇÊÍĞİ Çæ ãÔ ÔÇíİíäå İ ÇáÇÓÊÇß áÇä ÈÏÇíÊäÇ ÇáÊæÈ Çááí åæ 2
        top--;
    }
}
void display (){

// call EmptyStack -->áæ ÑÌÚÊ ÊÑæ ßÏå ÇáÇÓÊÇß İÇÖíå æãİíÔ ÚäÇÕÑ ÊÊØÈÚ  İåØÈÚ ãÓÌ ÇäåÇ İÇÖíå
    if(EmptyStack()) cout<<"stack is empty"<<endl;
    else{
        // ØÈÚ ÇáÚäÇÕÑ ãä ÇáÊæÈ á ÕİÑ
        for(int t=top;t>=0;t--)
            cout<<arr[t]<<"  ";
    }
}
int main()
{
    push(7);
    push(4);
    push(22);

    // ÍĞİ ÇÎÑ ÚäÕÑ ÇÖÇİ æåæ 22
    pop();
    push(8);
    // åíØÈÚ 8æÈÚÏåÇ 4 æÈÚÏåÇ 7
    display();
    clearStack();
    //åíØÈÚ ÇäåÇ İÇÖíå áÇä ÇáÓØÑ Çááí İæŞ  ãÓÍåÇ ÇáÇÓÊÇß ßÇãáå
    display();
    return 0;
}




















*/


