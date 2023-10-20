#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a value : ";
    cin >> num;
    while (num > 9)
    {
        int ans = 0, rem = 0;
        while (num != 0)
        {
            rem = num % 10; // last value of digit
            num /= 10;      // first value of digit
            ans += rem;
        }
        num = ans;
    }
    cout << num;
}