#include <iostream>
using namespace std;

void pattern1(int n)
{
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        int rowReq = row > n ? 2 * n - row : row;
        for (int col = 1; col <= rowReq; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    //     *
    //    **
    //   ***
    //  ****
    // *****
    for (int row = n; row >= 1; row--)
    {
        for (int gap = row; gap >= 1; gap--)
        {
            cout << "- ";
        }
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    for (int row = 1; row <= n; row++)
    {
        for (int gap = n; gap >= row; gap--)
        {
            cout << "- ";
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    for (int row = n; row >= 1; row--)
    {
        for (int gap = 1; gap <= n - row + 1; gap++)
        {
            cout << "- ";
        }
        for (int col = 2 * row - 1; col >= 1; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    for (int row = 1; row <= (n * 2) - 1; row++)
    {
        int rowReq = row > (n * 2) / 2 ? n * 2 - row : row;
        for (int gap = 1; gap <= rowReq; gap++)
        {
            cout << "-";
        }

        for (int col = n; col >= rowReq; col--)
        {
            cout << "$ ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    //     1
    //    22
    //   333
    //  4444
    // 55555
    for (int row = 1; row <= n; row++)
    {
        for (int gap = n - row + 1; gap >= 1; gap--)
        {
            cout << "- ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    //     1
    //    12
    //   123
    //  1234
    // 12345
    for (int row = 1; row <= n; row++)
    {
        for (int gap = n - row + 1; gap >= 1; gap--)
        {
            cout << "- ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    //     1
    //    21
    //   321
    //  4321
    // 54321
    for (int row = 1; row <= n; row++)
    {
        for (int gap = n - row + 1; gap >= 1; gap--)
        {
            cout << "- ";
        }
        for (int col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    //     1
    //    121
    //   12321
    //  1234321
    // 123454321
    for (int row = 1; row <= n; row++)
    {
        for (int gap = n - row + 1; gap >= 1; gap--)
        {
            cout << "- ";
        }
        int rowReq = row * 2 - 1;
        for (int col = 1; col <= rowReq; col++)
        {
            if (col > (row))
            {
                cout << (rowReq + 1) - col << " ";
            }
            else
            {
                cout << col << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter the number of rows you want : ";
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    pattern9(n);
}