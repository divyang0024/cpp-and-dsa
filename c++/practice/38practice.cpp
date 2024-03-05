#include <iostream>
#include <cmath>
using namespace std;
// koko eating banana(leetcode 875).

int findKokoSpeed(int pile, int hours, int array[])
{
    long long total = 0;
    int start = 0, end = 0, ans = -1;

    for (int i = 0; i < pile; i++)
    {
        total += array[i];
        end = max(end, array[i]);
    }
    start = total / hours;
    if (!start)
    {
        start = 1;
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // indicates bananas eaten in 1 hour.
        int count = 0;
        for (int i = 0; i < pile; i++)
        {
            count += array[i] / mid;
            if (array[i] % mid)
                count += 1;
        }

        if (count <= hours)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int pile, hours;
    cout << "enter the number of pile : ";
    cin >> pile;
    int array[pile];
    for (int i = 0; i < pile; i++)
    {
        cout << "enter the number bananas in pile " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << "enter number of hours : ";
    cin >> hours;
    cout << "koko speed should be " << findKokoSpeed(pile, hours, array) << " if the number of hours are " << hours;
    return 0;
}