#include <iostream>
using namespace std;

int main()
{
    int row = 5;
    int col = 5;
    int num = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
    return 0;
}