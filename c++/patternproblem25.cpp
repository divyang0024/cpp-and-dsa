#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of grid : ";
    cin >> n;
    for (int row = 1; row <= n; row += 1)
    {
        for (int gap = 1; gap <= n; gap += 1)
        {
            if (gap <= n - row)
            {
                cout << " ";
            }
        }
        for (int col = 1; col <= (row * 2) - 1; col += 1)
        {
            if (col <= row)
            {
                cout << col;
            }
            else
            {
                cout << (2 * row) - col;
            }
        }
        cout << endl;
    }
    return 0;
}