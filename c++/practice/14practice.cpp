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
        for (int col = 1; col <= row * 2 - 1; col++)
        {
            if (col <= row)
            {
                cout << (char)(col + 64);
            }
            else
            {
                cout << (char)((row * 2 - col) + 64);
            }
        }
        cout << endl;
    }
    return 0;
}