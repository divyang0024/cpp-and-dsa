#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter grid size : ";
    cin >> n;
    for (int row = 1; row <= n; row += 1)
    {
        for (int gap = 1; gap <= n; gap += 1)
        {
            if (gap <= n - row)
            {
                cout << " ";
            }
            else
            {
                cout << n - gap + 1;
            }
        }
        cout << endl;
    }
    return 0;
}