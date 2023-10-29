#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int gap = 5; gap >= 1; gap--)
        {
            if (gap > row)
            {
                cout << " ";
            }
        }
        for (int col = 1; col <= row * 2 - 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row1 = 1; row1 <= 4; row1++)
    {
        for (int gap = 1; gap <= row1; gap++)
        {
            cout << " ";
        }
        for (int col = (4 - row1 + 1) * 2 - 1; col >= 1; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}