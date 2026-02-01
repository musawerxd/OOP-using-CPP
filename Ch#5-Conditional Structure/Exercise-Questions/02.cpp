#include <iostream>
using namespace std;
int main()
{
	char status;
	int sal;
	cout << "Enter Salesperson's Status ('s' or 'S' for Senior Salesperson and 'j' or 'J' for Junior Salesperson): ";
	cin >> status;
	if (status == 's' || status == 'S')
	{ // There are almost 4 weeks in 1 month. So, I have multiplied per week salary to 4 to find out per month salary
		sal = 4 * 400;
		cout << "\nSenior Salesperson's Salary is: " << sal;
	}
	else if (status == 'j' || status == 'J')
	{
		sal = 4 * 275;
		cout << "\nJunior Salesperson's Salary is: " << sal;
	}
	else
		cout << "\nInvalid Input";
	return 0;
}
