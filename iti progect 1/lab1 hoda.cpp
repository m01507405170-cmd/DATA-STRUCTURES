#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
//const int size =5;
//int arr[size];

struct student
{
    int id;
    string name;
    int age;

};
void Fill(student arr[] , int size)
{
    for(int i=0; i<size;  i++)
    {
        cout<<"enter a id ";
        cin>>arr[i].id;
        cout<<"enter a name ";
        cin>>arr[i].name;
        cout<<"enter a age ";
        cin>>arr[i].age;
    }
}
void Display1(student arr[] , int size)
{
    for(int i=0;  i<size;   i++)
    {
cout<<" id = " <<arr[i].id <<endl;
cout<<" name = " <<arr[i].name <<endl;
cout<<" age = " <<arr[i].age <<endl;

    }
}
void display2(student *arr , int size)
{


    for(int i=0;  i<size;   i++)
    {
cout<<" id = " <<(arr+i)->id <<endl;
cout<<" name = " <<(arr+i)->name <<endl;
cout<<" age = " <<(arr+i)->age <<endl;

    }                                                                                               
}

int main()
{
student s1[5];
Fill (s1,5);
Display1(s1 , 5);
display2(s1 , 5);

}

