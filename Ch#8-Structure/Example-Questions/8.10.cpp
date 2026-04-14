#include <iostream>
using namespace std;
struct Result
{
	int marks;
	char grade;
};
struct Record
{
	int roll;
	Result r;
} rec;

/* Another Method for Nested Structure:
struct Record
{
	int roll;
	struct Result
	{
		int marks;
		char grade;
	} r;
}rec;	*/

int main()
{
	cout << "Enter Roll No: ";
	cin >> rec.roll;
	cout << "Enter Marks: ";
	cin >> rec.r.marks;
	cout << "Enter Grade: ";
	cin >> rec.r.grade;
	cout << endl
		 << "Roll No: " << rec.roll << endl;
	cout << "Marks: " << rec.r.marks << endl;
	cout << "Grade: " << rec.r.grade;
	return 0;
}
