#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout << "Enter Your Marks: ";
	cin >> marks;
	cout << "Result is " << ((marks >= 40) ? "Pass." : "Fail.");
	return 0;
}
