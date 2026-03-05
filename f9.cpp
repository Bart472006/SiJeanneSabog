// RAIDEN MUNOZ - 1CPE - 2B
#include<iostream>
using namespace std;

bool p(int num) {
    if(num<=1)
        return false;
    for(int i=2;i<num;i++){
        if(num%i==0)
            return false;}
    return true;}

int main(){
    int number;
    cout<<"Please enter a number: ";
    cin>>number;
    if(p(number)){
        cout<<number<<" is a prime number!"<<endl;}
    else{
        cout<<number<<" is not a prime number!"<<endl;}
    return 0;}