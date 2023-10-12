#include <iostream>
using namespace std;

int main()
{
    int n = 10, tableOf;
    cout << "enter the value : ";
    cin >> tableOf;
    for (int i = 1; i <= n; i++)
    {
        cout << tableOf << " x " << i << " = " << (i * tableOf) << endl;
    }

    return 0;
}