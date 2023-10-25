#include <iostream>
using namespace std;

int checkRectangle(int a, int b, int c, int d)
{
    if (a == b && c == d)
    {
        cout << "it is a rectagnle : ";
        return 1;
    }
    else
    {
        cout << "not a rectangle : ";
        return 0;
    }
}

int main()
{
    int l1, l2, b1, b2;
    cout << "enter l and b respectively : ";
    cin >> l1 >> l2 >> b1 >> b2;
    cout << checkRectangle(l1, l2, b1, b2);
    return 0;
}