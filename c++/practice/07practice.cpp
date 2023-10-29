#include <iostream>
using namespace std;

int main()
{
    for (char row = 'D'; row >= 'A'; row -= 1)
    {
        for (char col = 'A'; col <= row; col += 1)
        {
            cout << col;
        }
        cout << endl;
    }
    return 0;
}