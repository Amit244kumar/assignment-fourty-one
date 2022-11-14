#include<conio.h>
#include<iostream>
#include<stack>
#include<list>

using namespace std;
void view(list<int>&s)
{
    list<int>::iterator t1;
    for(t1=s.begin();t1!=s.end();t1++)
    {
        cout<<*t1<<" ";
    }
    cout<<"d"<<endl;
    cout<<endl;
}
int menu()
{
    int choice;
    cout<<"1.delete elements from last"<<endl;
    cout<<"2.back your action"<<endl;
    cout<<"Enter your choice";
    cin>>choice;
    return choice;
}
int main()
{
   list<int>v1={2,3,5,24,6,73,3,2,5};
   stack<int>s1;

   while(!v1.empty())
   {
       system("cls");
       view(v1);
       switch(menu())
       {
       case 1:

           s1.push(v1.back());
           v1.remove(v1.back());
           cout<<"The last value deleted";
           break;
       case 2:
           if(!s1.empty()){
               v1.push_back(s1.top());
               s1.pop();
               cout<<"The back action done";
           }
           break;
       default:cout<<"Invalid choice";
       }
       getch();

   }

}
