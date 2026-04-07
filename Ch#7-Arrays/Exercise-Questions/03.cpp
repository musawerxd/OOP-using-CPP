#include <iostream>
using namespace std;
int main()
{
	const int size = 10;
	int num[size], sq[size], cube[size], sum[size], tot = 0;
	for (int i = 0; i < size; i++)
	{
		num[i] = i;
		sq[i] = i * i;
		cube[i] = i * i * i;
		sum[i] = num[i] + sq[i] + cube[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << "Sum of " << i << "," << i << " Squared, and " << i << " Cubed is:  " << sum[i] << endl;
		tot = tot + sum[i];
	}
	cout << "Grand Total:  " << tot;
	return 0;
}
