#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a;
    int b;
    cout << "Enter two Values: ";
    cin >> a >> b;

    cout << "Before Swap: a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After Swap: a = " << a << " b = " << b;
    return 0;
}