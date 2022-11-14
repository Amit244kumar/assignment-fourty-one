#include<conio.h>
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    int f;
    forward_list<int>f1;
    forward_list<int>::iterator t;
    for(int i=0;i<10;i++)
    {
        cin>>f;
        f1.push_front(f);
    }
    cout<<"The list elements "<<endl;
    for(t=f1.begin();t!=f1.end();t++)
    {
        cout<<*t<<" ";
    }
    f1.reverse();
    cout<<endl<<"The reverse elements of list"<<endl;
    for(t=f1.begin();t!=f1.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;

}
