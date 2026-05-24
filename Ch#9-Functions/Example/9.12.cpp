#include <iostream>
using namespace std;

int calculateArea(int base, int height)
{
    int area = 0.5 * (base * height);
    return area;
}

int main()
{
    int height, base;
    cout << "Enter Base: ";
    cin >> base;
    cout << "Enter Height: ";
    cin >> height;
    cout << "Area of Triangle with base " << base << " and height " << height << " is: " << calculateArea(base, height);
    return 0;
}