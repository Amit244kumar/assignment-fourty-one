#include<conio.h>
#include<iostream>
#include<stack>
using namespace std;
void revStrWrdWise(char str[])
{
    char *ptr;
    int d=0,i;
    stack<char*>s1;
    char *str1;
    str1=new char[15];
    for(i=0;str[i];i++)
        continue;
    str[i]=' ';
    for(i=0;str[i];i++)
    {
        if(str[i]!=' '){
            str1[d]=str[i];
            d++;
        }
        else{
           str1[d]='\0';
           s1.push(str1);
           str1=new char[15];
           d=0;
        }
    }

    i=0;
    ptr=s1.top();
    for(int i=0;ptr[i];i++)
    if(ptr[i]==10){
            ptr[i]=ptr[i+1];
            ptr[i]='\0';
            break;
    }
    while(!s1.empty())
    {

        ptr=s1.top();
        s1.pop();
        for(int e=0;ptr[e];e++,i++)
        {
            str[i]=ptr[e];
        }
        str[i]=' ';
        delete ptr;
        i++;
    }
}
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
    revStrWrdWise(n);
    //reverseString(n);
    for(int i=0;n[i];i++)
    {
        cout<<n[i];
    }
    getch();
    return 0;
}
