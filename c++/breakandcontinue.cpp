#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "enter choice 'b' if break and 'c' if continue : ";
    cin >> ch;

    if (ch == 'b')
    {
        for (int i = 1; i <= 10; i += 1)
        {
            if (i == 4)
                break;

            cout << i << endl;
        }
    }
    else if (ch == 'c')
    {
        for (int i = 1; i <= 10; i += 1)
        {
            if (i == 4)
                continue;

            cout << i << endl;
        }
    }
    else
    {
        cout << "wrong input!!!!.";
    }

    return 0;
}