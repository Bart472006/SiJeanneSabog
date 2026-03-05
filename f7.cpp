// Raiden Munoz - 1CPE - 2B
#include<iostream>
using namespace std;

int main(){
    double num1, num2;
    double ave(double num1, double num2);
    double sumsqr(double num1, double num2);
    double sqrsum(double num1, double num2);
    cout<<"Please enter the first number: ";
    cin>>num1;
    cout<<"Please enter the second number: ";
    cin>>num2;
    cout<<"Average: "<<ave(num1,num2)<<endl;
    cout<<"Sum of the squares: "<<sumsqr(num1,num2)<<endl;
    cout<<"Square of the sum: "<<sqrsum(num1,num2)<<endl;
    return 0;
}

double ave(double num1, double num2){
    return (num1+num2)/2;
}

double sumsqr(double num1, double num2){
    return (num1*num1)+(num2*num2);
}

double sqrsum(double num1, double num2) {
    double sum=num1+num2;
    return sum*sum;
}