#include <iostream>
using namespace std;

int main()
{
    int nth, i = 1;
    cout << "enter the nth term : ";
    cin >> nth;
    cout << "list of numbers that are not divisible by 3 and 5 till nth term : ";
    while (i <= nth)
    {
        if ((i % 3 != 0 && i % 5 != 0) && (i != 3 || i != 5))
        {
            cout << i << endl;
            ++i;
            continue;
        }
        ++i;
    }
    return 0;
}