#include <iostream>
using namespace std;

// a
// bb
// ccc
// dddd
// eeeee

int main()
{
    for (int row = 1; row <= 5; row += 1)
    {
        char name = 'a' + row - 1; // 97+1='b'-1=97
        for (int col = 1; col <= row; col += 1)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}