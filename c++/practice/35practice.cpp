#include <iostream>
#include <algorithm>
using namespace std;

int paintWallWithMinTime(int painters, int walls, int array[])
{

    if (painters > walls)
    {
        return -1;
    }

    int start = 0;
    int end = 0;
    int ans = 0;

    for (int i = 0; i < walls; i++)
    {
        start = max(start, array[i]);
        end += array[i];
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // represents time out (it is the time where each painter try to paint as many walls as they can till they run out of time).
        int count = 1;
        int time = 0;
        for (int i = 0; i <= walls; i++)
        {
            time += time;
            if (time > mid)
            {
                count++;
                time = array[i];
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
}

int main()
{
    int walls, painters;
    cout << "enter the number of walls : ";
    cin >> walls;
    int array[walls]; // length of walls.
    for (int i = 0; i < walls; i++)
    {
        cout << "enter the length of wall " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << "enter number of painters : ";
    cin >> painters;
    cout << "minimum time required by " << painters << " painters to paint " << walls << " walls : " << paintWallWithMinTime(painters, walls, array) << " min";
    return 0;
}