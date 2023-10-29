#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row += 1)
    {
        for (int gap = 1; gap <= 5 - row; gap += 1)
        {
            cout << "-";
        }
        for (int col = 5; col >= 1; col -= 1)
        {
            if (col <= row)
            {
                cout << col;
            }
        }
        cout << endl;
    }

    return 0;
}
