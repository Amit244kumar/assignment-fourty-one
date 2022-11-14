#include<conio.h>
#include<iostream>
#include<stack>

using namespace std;

void NGE(int ar[],int n)
{
    int d=0,f=0,a,i;
    stack<int>s;
    int i;
    for(i=n-1;i>=0;i--)
    {
        s.push(ar[i]);
    }
    while(!s.empty())
    {
        a=s.top();
        s.pop();
        for(i=++d;i<n;i++)
        {
            if(a<)
        }
    }
}
int main()
{
    int arr[10];
    cout<<"Enter 10 elements"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    NGE(arr,10);
    getch();
    return 0;
}
