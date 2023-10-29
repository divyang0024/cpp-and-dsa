#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row += 1)
    {
        for (int gap = 5; gap >= 1; gap -= 1)
        {
            if (gap > row)
            {
                cout << "-";
            }
        }
        for (int col = 5; col >= 5 - row + 1; col -= 1)
        {
            cout << col;
        }
        cout << endl;
    }
    return 0;
}