#include <iostream>
using namespace std;
struct Emp
{
	int cod, sal, gr;
};

int main()
{
	Emp e1, e2;
	cout<<"Enter Code, Salary and Grade of First Employee: ";
	cin>>e1.cod>>e1.sal>>e1.gr;
	cout<<"Enter Code, Salary and Grade of Second Employee: ";
	cin>>e2.cod>>e2.sal>>e2.gr;
	cout<<"\nDetails of Employee with more Salary:"<<endl;
	if(e1.sal > e2.sal)
		cout<<"Code: "<<e1.cod<<endl<<"Salary: "<<e1.sal<<endl<<"Grade: "<<e1.gr;
	else
		cout<<"Code: "<<e2.cod<<endl<<"Salary: "<<e2.sal<<endl<<"Grade: "<<e2.gr;
	return 0;
}
