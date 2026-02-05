#include <iostream>
using namespace std;
int main()
{
	char n;
	cout << "Code \t\t Disk Drive Manufacture" << endl;
	cout << "---- \t\t ----------------------" << endl;
	cout << " 1 \t\t Western Digital" << endl;
	cout << " 2 \t\t 3M Corporation" << endl;
	cout << " 3 \t\t Maxwell Corporation" << endl;
	cout << " 4 \t\t Sony Corporation" << endl;
	cout << " 5 \t\t Verbatim Corporation" << endl;
	cout << "\nEnter Code Number (from 1 to 5): ";
	cin >> n;
	cout << endl
		 << "Associated Disk Drive Manufacture for Entered Code is:" << endl;
	switch (n)
	{
	case '1':
		cout << "\tWestern Digital";
		break;
	case '2':
		cout << "\t3M Corporation";
		break;
	case '3':
		cout << "\tMaxell Corporation";
		break;
	case '4':
		cout << "\tSony Corporation";
		break;
	case '5':
		cout << "\tVerbatim Corporation";
		break;
	default:
		cout << endl
			 << "Invalid Input";
	}
	return 0;
}
