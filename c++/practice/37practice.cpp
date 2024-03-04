#include <iostream>
using namespace std;

// max distance b/w cows.

int maxPossibleDistanceBCow(int size, int cows, int stall[])
{
    int start = stall[0];
    int end = stall[size - 1] - stall[start];
    int mid;
    int ans;
    while (start <= end)
    {
        mid = (start + end) / 2;
        int count = 1;
        int distance = 0;
        int pos = stall[0];
        for (int i = 1; i < size; i++)
        {
            distance = mid + pos;
            if (distance <= stall[i])
            {
                count += 1;
                pos = stall[i]; // refernce point for next cow.
            }
        }
        if (count >= cows)
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
    int stall, cows;
    cout << "enter the number of stalls : ";
    cin >> stall;
    int array[stall];
    for (int i = 0; i < stall; i++)
    { // take input in ascending order.
        cout << "enter the distance of stall " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << "enter number of cows : ";
    cin >> cows;
    cout << "total distance required between " << cows << " cows : " << maxPossibleDistanceBCow(stall, cows, array);
    return 0;
}