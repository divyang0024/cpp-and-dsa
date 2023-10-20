#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a value : ";
    cin >> num;
    if (num == 1)
    {
        cout << "not power of 2";
    }
    else
    {
        while (num != 1)
        {
            if (num % 2 == 1)
            {
                cout << "not power of 2";
                return 0;
            }
            else
                num /= 2;
        }
        cout << "is a power of 2";
    }
    return 0;
}