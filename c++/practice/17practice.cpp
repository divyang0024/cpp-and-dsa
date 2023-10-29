#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number to check whether it is a even positive number : ";
    cin >> num;
    if (num % 2 == 0 && num >= 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}