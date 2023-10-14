#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row += 1)
    {
        int col = 5 - row + 1;
        for (col; col >= 1; col -= 1)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}