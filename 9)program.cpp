#include<conio.h>
#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
     forward_list<int>f1={10,20,30,40};
     forward_list<int>f2={9,5};
     forward_list<int>::iterator t1;
     cout<<"first list : ";
     for(t1=f1.begin();t1!=f1.end();t1++)
     {
         cout<<*t1<<" ";
     }
     cout<<endl;
     cout<<"second list : ";
     for(t1=f2.begin();t1!=f2.end();t1++)
     {
         cout<<*t1<<" ";
     }
     cout<<endl;
     f2.splice_after(f2.begin(),f1,f1.begin(),f1.end());
     for(t1=f2.begin();t1!=f2.end();t1++)
     {
          cout<<*t1<<" ";
     }
     getch();
     return 0;
}
