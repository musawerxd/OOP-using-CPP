#include <iostream>
using namespace std;
int main()
{
	long sal;
	cout << "Enter Your Basic Salary: ";
	cin >> sal;
	double gross = sal + (0.35 * sal) + (0.25 * sal);
	cout << "Your Gross Salary is: " << gross;
	return 0;
}
