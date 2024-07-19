#include <iostream>
#include <algorithm>
using namespace std;

int addArrayElem(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int findMax(int n, int arr[])
{
    return *max_element(arr, arr + n);
}

void bookAllocationProblem()
{
    int n;
    cout << "enter no of books : ";
    cin >> n;
    int books[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter no of pages in book " << i + 1 << " : ";
        cin >> books[i];
    }
    int students;
    cout << "enter number of student : ";
    cin >> students;

    int start = findMax(n, books);
    int end = addArrayElem(n, books);
    int ans = end; // Initialize ans to a valid maximum

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int count = 1;
        int pages = 0;
        for (int i = 0; i < n; i++)
        {
            if (pages + books[i] > mid)
            {
                count++;
                pages = books[i];
            }
            else
            {
                pages += books[i];
            }
        }
        if (count <= students)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "Minimum number of pages: " << ans << endl;
}

void painterPartitionProblem()
{
    int n;
    cout << "enter no of walls : ";
    cin >> n;
    int walls[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter length of wall  " << i + 1 << " : ";
        cin >> walls[i];
    }
    int painters;
    cout << "enter number of painter : ";
    cin >> painters;

    int start = findMax(n, walls);
    int end = addArrayElem(n, walls);
    int ans = end; // Initialize ans to a valid maximum

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int count = 1;
        int time = 0;
        for (int i = 0; i < n; i++)
        {
            if (time + walls[i] > mid)
            {
                count++;
                time = walls[i];
            }
            else
            {
                time += walls[i];
            }
        }
        if (count <= painters)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "Minimum time required by each painter to complete all the walls : " << ans << endl;
}

void shipPackageProblem()
{
    int n;
    cout << "enter no of packages : ";
    cin >> n;
    int packages[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter weight of package  " << i + 1 << " : ";
        cin >> packages[i];
    }
    int days;
    cout << "enter number of day : ";
    cin >> days;

    int start = findMax(n, packages);
    int end = addArrayElem(n, packages);
    int ans = end; // Initialize ans to a valid maximum

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int count = 1;
        int storage = 0;
        for (int i = 0; i < n; i++)
        {
            if (storage + packages[i] > mid)
            {
                count++;
                storage = packages[i];
            }
            else
            {
                storage += packages[i];
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
    cout << "Minimum weight stored by ship each day to complete shipment : " << ans << endl;
}

int main()
{
    // bookAllocationProblem();
    // painterPartitionProblem();
    shipPackageProblem();
    return 0;
}