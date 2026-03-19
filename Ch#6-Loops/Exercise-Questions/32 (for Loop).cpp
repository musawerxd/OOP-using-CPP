#include <iostream>
using namespace std;
int main()
{
	double sum = 0;
	for (double i = 1; i <= 97; i += 2)
		sum += i / (i + 2);
	cout << "Sum of the Series is: " << sum;
	return 0;
}
