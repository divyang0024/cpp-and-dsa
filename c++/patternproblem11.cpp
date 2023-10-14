#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "enter the number of rows you want : ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}