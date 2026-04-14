#include <iostream>
using namespace std;
struct Student
{
	int m;
	char g;
};
int main()
{
	Student a; // Another Method:	Student a,b;
	cout << "Enter Marks: ";
	cin >> a.m;
	cout << "Enter Grade: ";
	cin >> a.g;
	Student b = a; // Another Method:	b=a;
	cout << endl
		 << "The First Record is as Follows: ";
	cout << endl
		 << "Marks: " << a.m << endl
		 << "Grade: " << a.g;
	cout << endl
		 << "The Second Record is as Follows: ";
	cout << endl
		 << "Marks: " << b.m << endl
		 << "Grade: " << b.g;
	return 0;
}
