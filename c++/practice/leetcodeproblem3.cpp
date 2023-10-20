#include <iostream>
using namespace std;

int main()
{
    int num, rem = 0, ans = 0;
    cout << "enter a value : ";
    cin >> num;
    // while (num != 0)
    // {
    //     rem = num % 10;
    //     num /= 10;
    //     ans = ans * 10 + rem;
    // }
    // cout << ans;
    cout << num % 10;
    cout << num / 10;
    return 0;
}