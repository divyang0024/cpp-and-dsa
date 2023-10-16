#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the grid value : ";
    cin >> n;
    for (int row = 1; row <= n; row += 1)
    {
        for (int col = 1; col <= n; col += 1)
        {
            if (col <= 5 - row)
            {
                cout << " ";
            }
            else
            {
                cout << "*"
                     << " ";
            }
        }
        cout << endl;
    }
    return 0;
}