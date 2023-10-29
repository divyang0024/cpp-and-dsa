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
            cout << col << "";
        }
        cout << endl;
    }
    return 0;
}