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
                cout << "-";
            }
        }
        for (char col = 'A'; col <= 'E'; col += 1)
        {
            if (col - 64 <= row)
            {
                cout << (char)(row + 64);
            }
        }
        cout << endl;
    }
    return 0;
}