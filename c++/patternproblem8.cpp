#include <iostream>
using namespace std;

int main()
{
    int row = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (char j = 'a'; j <= 'e'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}