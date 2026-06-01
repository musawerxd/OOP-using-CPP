#include <iostream>
using namespace std;
void fun()
{
    static int n = 1;
    cout << "Value of n is : " << n++ << endl;
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        fun();
    }

    return 0;
}