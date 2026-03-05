#include<iostream>
#include<stack>
using namespace std;
stack <string> mystack;
char name[10];
int x;
main()
{
for(x=1;x<=5;x++)
{cout<<"Enter a name: ";
 cin>>name;
 mystack.push(name);}	

cout<<"\nThe names are";
while(!mystack.empty())
{cout<<' ' <<mystack.top();
mystack.pop(); }
}
