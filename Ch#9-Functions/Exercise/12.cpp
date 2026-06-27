#include <iostream>
using namespace std;
void Draw_Horizontal();
void Draw_Vertical();

int main()
{
	Draw_Horizontal();
	Draw_Vertical();
	Draw_Horizontal();
	return 0;
}

void Draw_Horizontal()
{
	for(int i=1; i<=26; i++)
		cout<<"*";
	cout<<endl;
}
void Draw_Vertical()
{
	for(int i=1; i<=5; i++)
		cout<<"* \t\t\t *\n";
}
