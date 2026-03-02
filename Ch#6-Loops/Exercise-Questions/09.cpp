#include <iostream>
using namespace std;
int main()
{
	long num, sum, arm, nxt;
	cout << "Enter the Limit up to which Armstrong Numbers are Required:  ";
	cin >> num;
	cout << "\nArmstrong Numbers up to (" << num << ") is:" << endl;
	for (int i = 1; i <= num; i++)
	{
		nxt = i;
		sum = 0;
		while (nxt != 0)
		{
			arm = nxt % 10;
			sum += (arm * arm * arm);
			nxt /= 10;
		}
		if (sum == i)
			cout << i << "\t";
	}
	return 0;
}
