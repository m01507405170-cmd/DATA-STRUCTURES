#include <iostream>
#include <queue>
#include<stack>
#include<string>
#include<algorithm>
         using namespace std;

int main()
{
    queue<string> q;
    string name;
    int ch;

    do
    {
cout << "1. Add Patient\n";
cout << "2. Call Patient\n";
cout << "3. Next Patient\n";
cout << "4. Total Patients\n";
cout << "5. Exit\n";


        cout << "Enter number ";
        cin >> ch;

        if (ch == 1)
        {
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            q.push(name);
        }
        else if (ch == 2)
        {
    if (q.empty())
                cout << "No patients in the waiting list\n";
    else
    {
                cout << q.front() << " can enter\n";
                q.pop();
            }
        }
else if (ch == 3)
        {
            if (q.empty())
                cout << "No patients in the waiting list\n";
            else
                cout << q.front() << endl;
        }
else if (ch == 4)
        {
            cout << q.size() << endl;         
        }
             else if (ch == 5)
        {
            cout << "  اتوكل علي كده حليت";
            cout<<" god bay "<<endl;
        }
else
        {
            cout << "Invalid choice\n";
        }
    }
while (ch != 5);

    return 0;
}
