#include <iostream>
using namespace std;
int main()
{
	cout << "\t1. Convert ASCII Value to Character\n";
	cout << "\t2. Convert Character to ASCII Value\n\n";
	int num, choice;
	char ch;
	cout << "Enter Your Choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << endl
			 << "Enter a Number: ";
		cin >> num;
		cout << "The Corresponding Character is: " << char(num);
		break;
	case 2:
		cout << endl
			 << "Enter a Character: ";
		cin >> ch;
		cout << "The Corresponding ASCII Value is: " << int(ch);
		break;
	default:
		cout << "Invalid Choice.";
	}
	return 0;
}
