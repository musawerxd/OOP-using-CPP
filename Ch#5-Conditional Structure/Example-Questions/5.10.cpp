#include <iostream>
using namespace std;
int main()
{
	float salary, bonus;
	int grade;
	cout<<"Enter Your Salary: ";
	cin>>salary;
	cout<<"Enter Your Grade: ";
	cin>>grade;
	if(grade>15)
		bonus= salary*50.0/100.0;
	else
		bonus= salary*25.0/100.0;
	salary=salary+bonus;
	cout<<"Your Salary is Rs."<<salary;
	return 0;
}
