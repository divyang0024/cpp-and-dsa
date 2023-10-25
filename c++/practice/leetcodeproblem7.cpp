#include <iostream>
using namespace std;

int trailingZeroes(int num)
{
    int count = 0;
    while (num >= 5)
    {
        count += num / 5;
        num /= 5;
    }
    return count;
}

int main()
{
    int num;
    cout << "enter a value : ";
    cin >> num;
    cout << "factorial of " << num << " has " << trailingZeroes(num) << " zeroes.";
    return 0;
}