#include <iostream>
using namespace std;
int main()
{
	int marks[10], a, b, c, f;
	a = b = c = f = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter Marks of Student" << i + 1 << ": ";
		cin >> marks[i];
		if (marks[i] >= 80)
			a++;
		else if (marks[i] >= 60)
			b++;
		else if (marks[i] >= 40)
			c++;
		else
			f++;
	}
	cout << endl
		 << a << " Students are in Grade A." << endl;
	cout << b << " Students are in Grade B." << endl;
	cout << c << " Students are in Grade C." << endl;
	cout << f << " Students are in Grade F." << endl;
	return 0;
}
