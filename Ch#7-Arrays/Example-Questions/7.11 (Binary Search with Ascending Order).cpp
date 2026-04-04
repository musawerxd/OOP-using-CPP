#include <iostream>
using namespace std;
int main()
{
	// Ascending Order Array:
	int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int n, loc = -1, s = 0, e = 9, mid;
	cout << "Enter a Number to Search in the Array: ";
	cin >> n;
	while (s <= e)
	{
		mid = (s + e) / 2;
		if (arr[mid] == n)
		{
			loc = mid;
			break;
		}
		else if (n < arr[mid])
			e = mid - 1;
		else
			s = mid + 1;
	}
	if (loc == -1)
		cout << endl
			 << n << " not found in the Array.";
	else
		cout << endl
			 << n << " found at index " << loc;
	return 0;
}
