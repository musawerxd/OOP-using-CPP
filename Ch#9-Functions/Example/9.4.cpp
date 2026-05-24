#include <iostream>
using namespace std;
void BeforeAfter(int n)
{
    int b = n - 1;
    int a = n + 1;
    cout << "Before " << n << " is : " << b << endl;
    cout << "Number is : " << n << endl;
    cout << "After " << n << " is : " << a << endl;
}
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    BeforeAfter(n);
    return 0;
}