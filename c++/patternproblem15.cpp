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
        for (int j = col; j >= 1; j--)
        {
            cout << '*' << " ";
        }
        col -= 1;
        cout << endl;
    }
    return 0;
}