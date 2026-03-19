/*Problem:-   Write a loop that will calculate the sum of every third integer, beginning with i=2
			  (i.e, calculate the sum 2 + 5 + 8 + 11 + ......) for all values of i that are less than 100.
			  Write the loop in each of the following ways:
					(3). Using a while loop */

#include <iostream>
using namespace std;
int main()
{
	int i = 2, sum = 0;
	while (i < 100)
	{
		sum = sum + i;
		i += 3;
	}
	cout << "Sum of the Series is: " << sum;
	return 0;
}
