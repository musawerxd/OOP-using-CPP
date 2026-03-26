#include <iostream>
using namespace std;
int main()
{
	char ch = 'A';
	int num;
	cout << "Enter the Height of the Triangle: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		ch = 'A';
		for (int j = 1; j <= i; j++)
		{
			cout << ch << " ";
			ch++;
		}
		cout << endl;
	}
	return 0;
}
