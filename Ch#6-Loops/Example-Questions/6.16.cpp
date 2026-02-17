#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 1, c = 3, num, nxt;
	cout << "How many Fabonacci Terms reuired: ";
	cin >> num;
	cout << a << "\t" << b;
	while (c <= num)
	{
		nxt = a + b;
		cout << "\t" << nxt;
		a = b;
		b = nxt;
		c++;
	}
	return 0;
}
