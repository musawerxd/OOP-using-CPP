#include <iostream>
using namespace std;
int main()
{
	long sum = 0, num, n = 1;
	cout << "How many Integers you want to Add: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		sum += n;
		n += 2;
	}
	cout << "Sum of first " << num << " Odd Integers is: " << sum;
	return 0;
}
