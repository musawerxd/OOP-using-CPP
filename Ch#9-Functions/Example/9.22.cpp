#include <iostream>
using namespace std;
struct Test
{
    int marks;
    char grade;
};
void displayStruct(Test t)
{
    cout << "Marks : " << t.marks << endl;
    cout << "Marks : " << t.grade << endl;
}
int main()
{
    Test t1;
    t1.marks = 50;
    t1.grade = 'A';
    displayStruct(t1);
    return 0;
}