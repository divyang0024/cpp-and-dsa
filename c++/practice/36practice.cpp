#include <iostream>
#include <algorithm>
using namespace std;

int minWeighTonShipPackagesinNDays(int days, int packages, int array[])
{

    if (days > packages)
    {
        return -1;
    }

    int start = 0;
    int end = 0;
    int ans = 0;

    for (int i = 0; i < packages; i++)
    {
        start = max(start, array[i]);
        end += array[i];
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;
        int count = 1;
        int weight = 0;
        cout << mid << endl;
        for (int i = 0; i < packages; i++)
        {
            weight += array[i];
            if (weight > mid)
            {
                ++count;
                weight = array[i];
            }
        }
        if (count <= days)
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
    int packages, days;
    cout << "enter the number of packages : ";
    cin >> packages;
    int array[packages]; // values inside packages denotes weight;
    for (int i = 0; i < packages; i++)
    {
        cout << "enter the weight of package " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << "enter number of days : ";
    cin >> days;
    cout << "minimum weight required to ship " << packages << " packages in "
         << days << " days : " << minWeighTonShipPackagesinNDays(days, packages, array) << " kton";
    return 0;
}