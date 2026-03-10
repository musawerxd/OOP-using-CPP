#include <iostream>
using namespace std;
int main()
{
	long num, pos, neg;
	pos = neg = 0;
	do
	{
		cout << "Enter a Number: ";
		cin >> num;
		if (num > 0)
			pos++;
		else if (num < 0)
			neg++;
	} while (num != 0);
	cout << "\nTotal Positive Numbers: " << pos << endl;
	cout << "Total Negative Numbers: " << neg;
	return 0;
}
