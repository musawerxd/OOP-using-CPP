#include <iostream>
using namespace std;
int main()
{
	// Descending Order Array:
	int arr[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
	int n, loc = -1, s = 0, e = 9, mid;
	cout << "Enter a Number to Search in the Array: ";
	cin >> n;
	while (e >= s)
	{
		mid = (s + e) / 2;
		if (arr[mid] == n)
		{
			loc = mid;
			break;
		}
		else if (n > arr[mid])
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
