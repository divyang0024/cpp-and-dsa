#include <iostream>
using namespace std;

int main()
{
    for (int row = 10; row <= 15; row += 1)
    {
        for (int col = 10; col <= row; col += 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}