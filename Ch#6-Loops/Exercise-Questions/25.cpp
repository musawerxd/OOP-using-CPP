#include <iostream>
using namespace std;
int main()
{
	double sum, f;
	for (float i = 1; i <= 7; i++)
	{
		f = 1.0;
		for (int j = 1; j <= i; j++)
			f = f * j;
		sum = sum + i / f;
	}
	cout << "Sum of the Series is: " << sum;
	return 0;
}
