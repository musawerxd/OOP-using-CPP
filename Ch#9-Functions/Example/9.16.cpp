#include <iostream>
using namespace std;
int g;
void hehe()
{
    g = g * 2;
}
int main()
{
    cout << "Enter value of g: ";
    cin >> g;
    cout << "Value Before Calling a Function: " << g << endl;
    hehe();
    cout << "Value After Calling a Function: " << g << endl;

    return 0;
}