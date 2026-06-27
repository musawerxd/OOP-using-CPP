#include <iostream>
using namespace std;
void line()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "*";
    }
    cout << endl;
}
void line(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
}
void line(int n, char s)
{
    for (int i = 0; i < n; i++)
    {
        cout << s;
    }
    cout << endl;
}
int main()
{
    line();
    line(5);
    line(3, '%');

    return 0;
}