#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int>s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    cout<<"The top element is ";
    cout<<s1.top();
    return 0;

}
