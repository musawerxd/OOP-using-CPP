#include <iostream>
using namespace std;
int main()
{
	int rno[5], marks[5], max = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Roll Number of Student" << i + 1 << ": ";
		cin >> rno[i];
		cout << "Enter Marks of Student" << i + 1 << ": ";
		cin >> marks[i];
	}
	for (int i = 0; i < 5; i++)
		if (marks[i] > marks[max])
			max = i;
	cout << "\nThe Details of Student with Highest Marks:" << endl;
	cout << "Roll Number: " << rno[max] << endl;
	cout << "Marks: " << marks[max];
	return 0;
}
