#include <iostream>
using namespace std;
struct Book
{
    string author;
    float price;
};
void DoubleIt(Book &b)
{
    b.price *= 2;
};
int main()
{
    Book b1;
    cout << "Enter name of the Book : ";
    cin >> b1.author;
    cout << "Enter price of the Book : ";
    cin >> b1.price;

    DoubleIt(b1);

    cout << "Autor: " << b1.author << " and the Price is: " << b1.price;
    return 0;
}