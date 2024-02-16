#include <iostream>
using namespace std;

int findSqrt(int num)
{
    int ans;
    int start = 1;
    int end = num;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int sq = mid * mid;
        if (sq == num)
        {
            return mid;
        }
        else if (sq < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int num;
    cout << "enter a value to find its sqrt : ";
    cin >> num;
    cout << findSqrt(num);
    return 0;
}