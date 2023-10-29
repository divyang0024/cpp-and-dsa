#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 26)
    {
        cout << (char)(64 + i) << endl;
        cout << (char)(96 + i) << endl;
        ++i;
    }
    return 0;
}