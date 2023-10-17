#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of grid : ";
    cin >> n;

    for (int row = 1; row <= n; row += 1)
    {
        for (int gap = 1; gap < row; gap += 1)
        {
            cout << ".";
        }
        for (int col = (n - row + 1) * 2 - 1; col >= 1; col -= 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}