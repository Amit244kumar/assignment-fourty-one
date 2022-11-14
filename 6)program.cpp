#include<conio.h>
#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    int f;
    forward_list<int>f1;
    forward_list<int>f2;
    forward_list<int>::iterator t;
    cout<<"Enter first list 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        f1.push_front(f);
    }
    cout<<"Enter second list 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        f2.push_front(f);
    }
    cout<<"your first list : ";
    for(t=f1.begin();t!=f1.end();t++)
    {
        cout<<*t<<" ";
    }
    cout<<endl;
    cout<<"your second list : ";
    for(t=f2.begin();t!=f2.end();t++)
    {
        cout<<*t<<" ";
    }
    cout<<endl;
    cout<<"The list after merged : ";
    f1.merge(f2);
     for(t=f1.begin();t!=f1.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;
}
