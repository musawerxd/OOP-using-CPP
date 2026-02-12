#include <iostream>
using namespace std;
int main()
{
	int irate;
	double sal, tax, nsal;
	cout << "Enter Salary: ";
	cin >> sal;
	if (sal > 30000)
	{
		tax = sal * 20 / 100;
		irate = 20;
	}
	else if (sal >= 20000 && sal < 30000)
	{
		tax = sal * 15 / 100;
		irate = 15;
	}
	else
	{
		tax = sal * 10 / 100;
		irate = 10;
	}
	nsal = sal - tax;
	cout << "Salary:  Rs." << sal << endl;
	cout << "Your Income Tax @ " << irate << "% is:  Rs." << tax << endl;
	cout << "Your Net Salary is:  Rs." << nsal;
	return 0;
}
