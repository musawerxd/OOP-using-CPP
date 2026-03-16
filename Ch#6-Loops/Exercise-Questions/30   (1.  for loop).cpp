/*Problem:-   Write a loop that will calculate the sum of every third integer, beginning with i=2
			  (i.e, calculate the sum 2 + 5 + 8 + 11 + ......) for all values of i that are less than 100.
			  Write the loop in each of the following ways:
					(1). Using a for loop */


#include <iostream>
using namespace std;
int main()
{
	int i, sum=0;
	for(i=2;i<100;i+=3)
		sum=sum+i;
	cout<<"Sum of the Series is: "<<sum;
	return 0;
}
