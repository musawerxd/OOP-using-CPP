#include <iostream>
using namespace std;
struct Book
{
    int pages;
    int price;
};
Book checkPrice(Book b1, Book b2)
{
    return (b1.price < b2.price) ? b2 : b1;
}
int main()
{
    Book b1, b2;
    cout << "Enter Pages of Book 1: ";
    cin >> b1.pages;
    cout << "Enter Price of Book 1: ";
    cin >> b1.price;

    cout << "Enter Pages of Book 2: ";
    cin >> b2.pages;
    cout << "Enter Price of Book 2: ";
    cin >> b2.price;

    Book result = checkPrice(b1, b2);
    cout << "Pages : " << result.pages << " with Price : " << result.price << " is more Expensive!";

    return 0;
}