#include <iostream>
using namespace std;
int main()
{
	float c = 4.0, r = 1.0;
	do
	{
		r = r + 1.0 / c;
		c += 4;
	} while (c <= 100);
	cout << "Result is: " << r;
	return 0;
}
