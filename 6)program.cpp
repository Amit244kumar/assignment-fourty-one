#include<conio.h>
#include<iostream>
#include<stack>
using namespace std;
void reverseString(char str[])
{
    int i=0;
    stack<int>s1;
    for(i=0;str[i];i++)
    {
        s1.push(str[i]);
    }
    i=0;
    while(!s1.empty())
    {
        str[i]=s1.top();
        s1.pop();
        i++;
    }
}
int main()
{
    char n[50];
    fgets(n,50,stdin);
    reverseString(n);
    for(int i=0;n[i];i++)
    {
        cout<<n[i];
    }
    getch();
    return 0;
}
