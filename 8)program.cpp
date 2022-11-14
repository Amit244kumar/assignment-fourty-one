#include<conio.h>
#include<iostream>
#include<stack>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void Sort(stack<int>&s)
{
    vector<int>v1;
    while(!s.empty())
    {
        v1.push_back(s.top());
        s.pop();
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++)
    {
        s.push(v1[i]);
    }
}
int main()
{
    stack<int>s1;
    s1.push(4);
    s1.push(1);
    s1.push(3);
    s1.push(8);
    s1.push(2);
    s1.push(6);
    Sort(s1);
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    getch();
    return 0;
}
