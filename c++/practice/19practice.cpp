#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter the value of a,b and c respectively : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}