// RAIDEN MUNOZ - 1CPE - 2B
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int rooms;
    double pricegallon,totalsqft=0,sqft;
    cout<<"Enter number of rooms: ";
    cin>>rooms;
    cout<<"Enter paint price per gallon: ";
    cin>>pricegallon;
    for(int i=0;i<rooms;i++){
        cout<<"Enter square feet for room: ";
        cin>>sqft;
        totalsqft+=sqft;}
    double gallons=galreq(totalsqft);
    double llabhrs=labhrs(gallons);
    double ppaintcst=paintcst(gallons,pricegallon);
    double llabchrg=labchrgs(llabhrs);
    double totalcost=totalcost(ppaintcst,llabchrg);
    cout<<fixed<<setprecision(2);
    cout<<"Estimated Paint Job:"<<endl;
    cout<<"Required Gallons of Paint: "<<gallons<<endl;
    cout<<"Required Hours of Labor: "<<llabhrs<<endl;
    cout<<"Cost of the paint: P"<<ppaintcst<<endl;
    cout<<"Labor charge: P"<<llabchrg<<endl;
    cout<<"Your total cost is: P"<<totalcost<<endl;
    return 0;}
    double galreq(double totalsqft){
        return totalsqft/115;}
    double labhrs(double gallons){
        return gallons*8;}
    double paintcst(double gallons,double pricegallon){
        return gallons*pricegallon;}
    double labchrgs(double labhrs){
        return labhrs*120;}
    double totalcost(double paintcst,double labchrgs){
        return paintcst+labchrgs;}