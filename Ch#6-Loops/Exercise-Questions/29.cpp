#include <iostream>
using namespace std;
int main()
{
	long num;
	int even, odd, prime, comp, p;
	char ch;
	odd = even = prime = 0;
	while (ch != 'n' && ch != 'N')
	{
		cout << "Enter a Number: ";
		cin >> num;
		if (num % 2 == 0)
		{
			cout << num << " is a Even Number." << endl;
			even++;
		}
		else
		{
			cout << num << " is a Odd Number." << endl;
			odd++;
		}
		p = 1;
		for (int i = 2; i <= num / 2; i++)
			if (num % i == 0)
			{
				p = 0;
				break;
			}
		if (p == 1)
		{
			cout << num << " is a Prime Number." << endl;
			prime++;
		}
		else
		{
			cout << num << " is a Composite Number." << endl;
			comp++;
		}
		cout << "\nEnter 'N' to Terminate, otherwise Press any Key to Continue: ";
		cin >> ch;
	}
	cout << "\nTotal Prime Numbers: " << prime << endl;
	cout << "Total Composite Numbers: " << comp << endl;
	cout << "Total Even Numbers: " << even << endl;
	cout << "Total Odd Numbers: " << odd;
	return 0;
}
