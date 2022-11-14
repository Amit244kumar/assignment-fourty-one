#include<conio.h>
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int>f1;
    f1.push_front(0);
    f1.push_front(1);
    f1.push_front(2);
    f1.push_front(3);
    f1.push_front(4);
    f1.push_front(5);
    f1.push_front(6);
    f1.push_front(7);
    f1.push_front(8);
    f1.push_front(9);
    f1.push_front(10);
    forward_list<int>::iterator t;
    for(t=f1.begin();t!=f1.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;

}
