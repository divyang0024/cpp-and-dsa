#include <iostream>
using namespace std;

int main()
{
    int row = 5;
    for (char i = 'a'; i <= 'd'; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}