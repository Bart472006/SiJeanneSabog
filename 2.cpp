//Create a C++ program that determines the EVEN numbers among 15 input values and output the list of these EVEN numbers using array.

#include<iostream>
using namespace std;
int main()
{
int a[15];
int ctr;
for(ctr=0;ctr<=14;ctr++)
{
    cout<<"Enter any Number = ";
    cin>>a[ctr];
}
cout<<“LIST OF EVEN NUMBERS”<<endl;
for(ctr=0;ctr<=14;ctr++)
	if(a[ctr] % 2 == 0)
    		cout<<a[ctr]<<endl;
return 0;
}
