#include <iostream>
using namespace std;
int main()
{
	int num, i, j;
	char ch = 'A';
	cout << "Enter Height of Triangle: ";
	cin >> num;
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << ch << " ";
			ch++;
		}
		cout << "\n";
	}
	return 0;
}
