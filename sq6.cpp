#include<iostream>
#include<conio.h>
#include<queue>
using namespace std;
queue <string> myqueue;
char name[10];
int x;
main()
{
for(x=1;x<=5;x++)
{cout<<"Enter a name: ";
 cin>>name;
 myqueue.push(name);}	

cout<<"\nThe names are";
while(!myqueue.empty())
{cout<<' ' <<myqueue.front();
myqueue.pop(); }
}
