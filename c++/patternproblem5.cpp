#include <iostream>
using namespace std;

int main()
{
    int row = 5;
    for (int i = row; i >= 1; i--)
    {
        for (int j = row; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}