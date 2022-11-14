#include<conio.h>
#include<iostream>
#include<stack>
using  namespace std;
void copyStack(stack<int>&s1,stack<int>&s2)
{
    stack<int>s;
    while(!s1.empty())
    {
        s.push(s1.top());
        s1.pop();
    }
    while(!s.empty())
    {
        s2.push(s.top());
        s.pop();
    }
}
int main()
{
    int f;
    stack<int>stack1;
    stack<int>stack2;
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        stack1.push(f);
    }
    copyStack(stack1,stack2);
    cout<<"The first stack elements are copied"<<endl;
    while(!stack2.empty())
    {
        cout<<stack2.top()<<" ";
        stack2.pop();
    }
    getch();
    return 0;
}
