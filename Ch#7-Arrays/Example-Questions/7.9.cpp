#include <iostream>
using namespace std;
int main()
{
	int num[5], a;
	for (a = 0; a < 5; a++)
	{
		cout << "Enter Number: ";
		cin >> num[a];
	}
	cout << "\nThe Array in Actual Order is:\n";
	for (a = 0; a < 5; a++)
		cout << num[a] << "  ";
	cout << "\nThe Array in Reverse Order is:\n";
	for (a = 4; a >= 0; a--)
		cout << num[a] << "  ";
	return 0;
}
