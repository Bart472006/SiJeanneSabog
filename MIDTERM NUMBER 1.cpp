//create oop
//classgradesheet
//with name id math science filipino hekasi average
#include<iostream>
#include<cctype>
#include<string>
#include<stack>
using namespace std;
class students
{
private:
	string name;
	double id;
	double math;
	double science;
	double english;
	double filipino;
	double hekasi;

public:
	double gradecounter()
	{
		return (math + science + english + filipino + hekasi)/5;
	}

	void setData(string n, double d, double m, double s, double e, double f, double h)
	{
		name = n;
		id = d;
		math = m;
		science = s;
		english = e;
		filipino = f;
		hekasi = h;
	}

};
void print()
{
repeat:
	char ans;
	double gave;
	cout<<"-GRADE SHEET-"<<endl;
	cout<<"[A] Laraquel's average"<<endl;
	cout<<"[B] Rance's average"<<endl;
	cout<<"[C] Gaspi's average"<<endl;
	cout<<"[D] Untalan's average"<<endl;
	cout<<"[E] Aldeguer's average"<<endl;
	cout<<"CHOOSE A LETTER TO PROCEED: "<<endl;
	cin>>ans;
	if(ans=='A')
	{
		students laraquel;
		laraquel.setData("Laraquel", 20221130923, 79, 81, 85, 95, 76);
		cout<<"the average is: "<<laraquel.gradecounter()<<endl;
	}
	else if(ans=='B')
	{
		students rance;
		rance.setData("Rance",20241113019, 76, 82, 86, 97, 91);
		cout<<"the average is: "<<rance.gradecounter()<<endl;
	}
	else if(ans=='C')
	{
		students gaspi;
		gaspi.setData("Gaspi", 20241120810, 77, 80, 87, 92, 82);
		cout<<"the average is: "<<gaspi.gradecounter()<<endl;
	}
	else if(ans=='D')
	{
		students untalan;
        untalan.setData("Untalan", 20241100997, 78, 89, 89, 81, 75);
        cout<<"the average is: "<<untalan.gradecounter()<<endl;
	}
	else if(ans=='E')
	{
        students aldeguer;
        aldeguer.setData("Aldeguer", 20241100023473, 79, 84, 90, 88, 80);
        cout<<"the average is: "<<aldeguer.gradecounter()<<endl;
	}
	else
	{
		cout<<"check your input"<<endl;
		goto repeat;
	}
}
int main()
{
	print();
	return 0;
}