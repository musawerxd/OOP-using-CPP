#include <iostream>
using namespace std;
int main()
{
	int mang[5], org[5], ban[5];
	long bill;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Purchase Detail of Customer" << i + 1 << endl;
		cout << "Enter Number of Mangoes: ";
		cin >> mang[i];
		cout << "Enter Number of Oranges: ";
		cin >> org[i];
		cout << "Enter Number of Bananas: ";
		cin >> ban[i];
	}
	cout << endl
		 << "------------------------------------------------------------------------------------" << endl;
	cout << "Customer Number \t Mangoes \t Oranges \t Bananas \t Total Bill" << endl;
	cout << "------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		bill = mang[i] * 20 + org[i] * 10 + ban[i] * 5;
		cout << "\t" << i + 1 << "\t\t   " << mang[i] << "\t\t   " << org[i] << "\t\t   " << ban[i] << "\t\t   Rs. " << bill << endl;
	}
	return 0;
}
