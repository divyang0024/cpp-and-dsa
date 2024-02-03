#include <iostream>
using namespace std;

void pattern1(int size)
{
    //      *
    //     * *
    //    * * *
    //   * * * *
    //  * * * * *
    //   * * * *
    //    * * *
    //     * *
    //      *
    for (int row = 1; row <= (size * 2) - 1; row++)
    {
        int colreq = row > size ? (size * 2) - row : row;
        int gapReq = size - colreq;

        for (int gap = 1; gap <= gapReq; gap++)
        {
            cout << "-";
        }

        for (int col = 1; col <= colreq; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int size)
{
    //  *        *
    //  **      **
    //  ***    ***
    //  ****  ****
    //  **********
    //  ****  ****
    //  ***    ***
    //  **      **
    //  *        *
    for (int row = 1; row <= (size * 2) - 1; row++)
    {
        int colreq = row > size ? (size * 2) - row : row;
        int gapReq = size - colreq;
        for (int col = 1; col <= colreq; col++)
        {
            cout << "* ";
        }
        for (int gap = (gapReq * 2); gap >= 1; gap--)
        {
            cout << "- ";
        }
        for (int col = 1; col <= colreq; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    pattern2(5);
    return 0;
}