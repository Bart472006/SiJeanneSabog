// RAIDEN MUNOZ - 1CPE - 2B
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double meters;
    int choice;
    cout<<"Enter a distance in meters: ";
    cin>>meters;
    if(meters<0){
        cout<<"Distance cannot be negative."<<endl;
        return 0;}
    do{
        menu();
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice){
            case 1: km(meters); break;
            case 2: inch(meters); break;
            case 3: ft(meters); break;
            case 4: cout<<"Bye!\n"; break;
            default: cout<<"Invalid choice. Try again.\n";}
    }while(choice!=4);
    return 0;}
    
void km(double meters){
    cout<<meters<<" meters is "<<meters*0.001<<" kilometers."<<endl;}
void inch(double meters){
    cout<<meters<<" meters is "<<meters*39.37<<" inches."<<endl;}
void ft(double meters){
    cout<<meters<<" meters is "<<meters*3.281<<" feet."<<endl;}
void menu(){
    cout<<fixed<<setprecision(2);
    cout<<"1. Convert to kilometers"<<endl;
    cout<<"2. Convert to inches"<<endl;
    cout<<"3. Convert to feet"<<endl;
    cout<<"4. Quit the program"<<endl;}