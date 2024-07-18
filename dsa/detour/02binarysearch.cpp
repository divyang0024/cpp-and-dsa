#include <iostream>
using namespace std;

int binarySearch(int n, int arr[], int target)
{
    bool flag = 0;
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            flag = 1;
            cout << mid;
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (flag == 0)
        cout << "element not found.";
}

void firstLastPosInSortedArr(int n, int arr[], int target)
{
    int start = 0, end = n - 1;
    int first = -1;
    int last = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "first occurance : " << first << endl;
    cout << "last occurance : " << last;
}

void correctIndexIfExists(int n, int arr[], int target)
{
    bool flag = 0;
    int start = 0, end = n - 1;
    int ans;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "element exists at : " << ans << " index.";
}

void findSqrt(int sqrt)
{
    int start = 1;
    int end = sqrt;
    int ans;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if ((mid * mid) == sqrt)
        {
            ans = mid;
            break;
        }
        else if ((mid * mid) < sqrt)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans;
}

void kthMissingElement(int n, int arr[], int kth)
{
    int start = 0;
    int end = n - 1;
    int missing = 0;
    int ans;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if ((arr[mid] - (mid + 1)) >= kth)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << ans + kth;
}

void findPeakMountain(int n, int arr[])
{
    int start = 0;
    int end = n - 1;
    int ans;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            ans = mid;
            break;
        }
        else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "peak index : " << ans;
}

void findMinInRotatedArray(int n, int arr[])
{
    int start = 0;
    int end = n - 1;
    int ans;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[0] <= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    cout << ans;
}
void findElemInRotatedArray(int n, int arr[], int target)
{
    int start = 0;
    int end = n - 1;
    int ans;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (arr[start] <= arr[mid])
        {
            if (target >= arr[start] && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout << ans;
}

int main()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter element at " << i << " index : ";
        cin >> arr[i];
    }
    // int target;
    // cout << "enter the element you want to search : ";
    // cin >> target;
    // binarySearch(n, arr, target);
    // firstLastPosInSortedArr(n, arr, target);
    // correctIndexIfExists(n, arr, target);
    // findSqrt(144);
    // kthMissingElement(n, arr, 4);
    // findPeakMountain(n, arr);
    // findMinInRotatedArray(n, arr);
    findElemInRotatedArray(n, arr, 6);
    return 0;
}