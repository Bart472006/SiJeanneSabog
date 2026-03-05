// RAIDEN MUNOZ - 1CPE - 2B
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double ps(double side){
    return 4*side;
}
double pr(double length,double width){
    return 2*(length+width);
}
double pc(double radius){
    return 2*M_PI*radius;
}

int main() {
    double side,length,width,radius;
    cout<<"Please enter the side length of the square: ";
    cin>>side;
    cout<<fixed<<setprecision(2);
    cout<<"Perimeter of the Square: "<<ps(side)<<endl;
    cout<<"Please enter the length and width of the rectangle: ";
    cin>>length>>width;
    cout<<fixed<<setprecision(2);
    cout<<"Perimeter of the Rectangle: "<<pr(length,width)<<endl;
    cout<<"Please enter the radius of the circle: ";
    cin>>radius;
    cout<<fixed<<setprecision(2);
    cout<<"Circumference of the Circle: "<<pc(radius)<<endl;
    return 0;
}