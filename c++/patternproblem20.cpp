#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter grid size : ";
    cin >> n;
    for (int row = 1; row <= n; row += 1)
    {
        for (int col = 1; col <= n; col += 1)
        {
            if (col <= n - row)
            {
                cout << " ";
            }
            else
            {
                cout << row;
            }
        }
        cout << endl;
    }
    return 0;
}