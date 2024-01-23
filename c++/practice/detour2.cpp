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
int main()
{
    int n;
    cout << "enter the number of rows you want : ";
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    pattern5(n);
}