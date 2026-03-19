#include <iostream>
using namespace std;
int main()
{
	double sum = 0, i = 1;
	do
	{
		sum += i / (i + 2); // sum=sum+i/(i+2);
		i += 2;				// i=i+2;
	} while (i <= 97);
	cout << "Sum of the Series is: " << sum;
	return 0;
}
