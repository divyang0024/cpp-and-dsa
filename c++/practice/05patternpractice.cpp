#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row += 1)
    {
        for (int col = 1; col <= row; col += 1)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}