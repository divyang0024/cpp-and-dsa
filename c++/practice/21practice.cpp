#include <iostream>
using namespace std;

void factWhile()
{
    int num, i = 1, fact = 1;
    cout << "enter a number : ";
    cin >> num;
    while (i <= num)
    {
        fact *= i;
        ++i;
    }
    cout << fact << endl;
}

void factDoWhile()
{
    int num, i = 1, fact = 1;
    cout << "enter a number : ";
    cin >> num;
    do
    {
        fact *= i;
        ++i;
    } while (i <= num);
    cout
        << fact << endl;
}

int main()
{
    factWhile();
    factDoWhile();
    return 0;
}