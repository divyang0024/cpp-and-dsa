#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value n to print square till nth term : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "the square of " << i + 1 << " is " << (i + 1) * (i + 1) << endl;
    }

    return 0;
}