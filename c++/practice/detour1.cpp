#include <iostream>
using namespace std;

int main()
{
    int n, n1 = 0, n2 = 1, n3 = 0;
    cout << "enter the number to find it's fibo series : ";
    cin >> n;
    cout << "01";
    for (int i = 2; i <= n; i += 1)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3;
    }
    return 0;
}