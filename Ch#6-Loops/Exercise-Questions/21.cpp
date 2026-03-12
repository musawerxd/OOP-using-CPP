#include <iostream>
using namespace std;
int main()
{
	double sum;
	for (int i = 1; i <= 99; i++)
		sum = sum + (i * 1.0 / (i + 1));
	cout << "Sum of the Series is: " << sum;
	return 0;
}
