#include<conio.h>
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list <int>f1={2,3,5,6,7,3,6};
    forward_list<int>::iterator t;
    cout<<"forward list elements"<<endl;
    for(t=f1.begin();t!=f1.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;
}
