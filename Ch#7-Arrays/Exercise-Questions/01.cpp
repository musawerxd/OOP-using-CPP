#include <iostream>
using namespace std;
int main()
{
	long num[10];
	int count;
	cout << "Enter Ten Integers: ";
	for (int i = 0; i < 10; i++)
	{
		int p = 1;
		cin >> num[i];
		for (int j = 2; j <= num[i] / 2; j++)
			if (num[i] % j == 0)
			{
				p = 0;
				break;
			}
		if (p == 1)
			count++;
	}
	cout << "Total Prime Numbers in Array: " << count;
	return 0;
}
