#include <iostream>
using namespace std;

int main()
{
    for (char i = 'a'; i <= 'e'; i++)
    {
        for (char j = 'a'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}