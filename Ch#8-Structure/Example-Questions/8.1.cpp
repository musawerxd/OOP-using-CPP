#include <iostream>
using namespace std;
struct student
{
	int roll, marks;
	float avg;
	char grade;
};	//Another Method:	} s;
int main()
{
	student s;	//if We use Other Above Method, then there is no need to write this C++ Statement.
	cout<<"Enter Roll No: ";
	cin>>s.roll;
	cout<<"Enter Marks: ";
	cin>>s.marks;
	cout<<"Enter Average: ";
	cin>>s.avg;
	cout<<"Enter Grade: ";
	cin>>s.grade;
	cout<<"\nYou Entered the Following Details:\n";
	cout<<"Roll No: "<<s.roll<<endl<<"Marks: "<<s.marks<<endl<<"Average: "<<s.avg<<endl<<"Grade: "<<s.grade;
	return 0;
}
