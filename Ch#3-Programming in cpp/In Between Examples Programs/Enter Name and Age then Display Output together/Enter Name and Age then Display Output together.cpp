//Write a program in which a user enters his 1st and 2nd name and his age. Then, these inputs display on the output screen together.

#include <iostream>
using namespace std;
int main()
{
	char FirstName[20], SecondName[20];
	int age;
	//Input Values
	cout<<"Enter 1st Name: ";
	cin>>FirstName;
	cout<<"Enter 2nd Name: ";
	cin>>SecondName;
	cout<<"Enter Age: ";
	cin>>age;
	//Output Display
	cout<<endl<<"Your Name is "<<FirstName<<" "<<SecondName<<". Your Age is "<<age<<".";
	return 0;
}
