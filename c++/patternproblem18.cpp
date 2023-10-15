#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "enter the number of rows you want : ";
    cin >> row;
    col = row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 5; j >= col - i + 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}