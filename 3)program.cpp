#include<conio.h>
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    int r;
    cout<<"Enter 5 elements "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>r;
        s.push(r);
    }

    if(!s.empty())
    {
        cout<<"The stack is not empty"<<endl;
    }
    else{
       cout<<"The stack is empty"<<endl;
    }
    s.pop();
    cout<<"pop operation done"<<endl;
    cout<<"Now stack size is "<<s.size()<<endl;
    getch();
    return 0;
}
