#include<conio.h>
#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    int f;
    forward_list<int>f1;
    forward_list<int>f2;
    forward_list<int>::iterator t1;
    cout<<"Enter 5 elements "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        f1.push_front(f);
    }
    f2.assign(f1.begin(),f1.end());
    cout<<"The first list elements copied"<<endl;
    for(t1=f2.begin();t1!=f2.end();t1++)
    {
        cout<<*t1<<" ";
    }
    getch();
    return 0;
}
