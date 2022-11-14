#include<iostream>
#include<conio.h>
#include<forward_list>

using namespace std;
void Remove(forward_list<int>&);
int main()
{
    int f;
   forward_list<int>f1;
   forward_list<int>::iterator t;

   for(int i=0;i<5;i++)
   {
       cin>>f;
       f1.push_front(f);
   }
   Remove(f1);
   for(t=f1.begin();t!=f1.end();t++)
   {
       cout<<*t<<" ";
   }
   getch();
   return 0;

}

void Remove(forward_list<int>&f1)
{
    int r=0;
    forward_list<int>::iterator t1;
    forward_list<int>::iterator t2;
    forward_list<int>::iterator t3;
    for(t1=f1.begin();t1!=f1.end();t1++)
       if(r<*t1)
           r=*t1;
    int ar[r+1]={0};
    for(t1=f1.begin();t1!=f1.end();t1++)
    {
        ar[*t1]+=1;
    }

    f1.clear();
    for(int i=0;i<=r;i++)
    {
        if(ar[i]==1)
            f1.push_front(i);
    }
}
