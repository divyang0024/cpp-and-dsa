#include <iostream>
using namespace std;

void evenWWhile()
{
    int n, i = 0;
    cout << "enter nth term to get list of even numbers : ";
    cin >> n;
    cout << "list of even numbers till nth term : " << endl;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        ++i;
    }
}

void evenWDoWhile()
{
    int n, i = 0;
    cout << "enter nth term to get list of even numbers : ";
    cin >> n;
    cout << "list of even numbers till nth term : " << endl;
    do
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        ++i;
    } while (i <= n);
}

int main()
{
    evenWWhile();
    evenWDoWhile();
    return 0;
}