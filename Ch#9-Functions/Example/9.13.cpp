#include <iostream>
using namespace std;
int sqr(int a)
{
    return a * a;
}
int cube(int b)
{
    return b * b * b;
}
int main()
{
    int a;
    int b;
    int sum;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    sum = sqr(a) + cube(b);
    cout << "sum of " << a << " square and " << b << " cube is: " << sum;
    return 0;
}