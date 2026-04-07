#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	char name[10][30];
	int sal[10];
	for (int i = 0; i < 10; i++)
	{
		cin.clear();
		cin.sync();
		cout << "Enter the Name of an Employee: ";
		cin.getline(name[i], 30);
		cout << "Enter the Salary: ";
		cin >> sal[i];
	}
	cout << setw(30) << left << "\nName" << "Salary" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (sal[i] * 12 >= 250000)
			cout << setw(30) << name[i] << setw(10) << sal[i] << "\tTax to be Paid!" << endl;
		else
			cout << setw(30) << name[i] << setw(10) << sal[i] << "\tNo Tax" << endl;
	}
	return 0;
}
