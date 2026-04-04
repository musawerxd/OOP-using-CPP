#include <iostream>
using namespace std;
int main()
{
	int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int n, i, loc = -1;
	cout << "Enter a Number to find: ";
	cin >> n;
	for (i = 0; i < 10; i++)
		if (arr[i] == n)
		{
			loc = i;
			cout << "Value found at index: " << loc;
		}
	if (loc == -1)
		cout << "Number not found in the Array.";
	return 0;
}
