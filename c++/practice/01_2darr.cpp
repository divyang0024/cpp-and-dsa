#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "enter number of row : ";
    cin >> r;
    cout << "enter number of column : ";
    cin >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter element at index [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "[" << arr[i][j] << "] ";
            if (j == c - 1)
            {
                cout << endl;
                cout << endl;
            }
        }
    }

    return 0;
}