#include <iostream>
#include <vector>
using namespace std;
// Trapping Rain Water(leetcode problem 42).
int trap(vector<int> &height)
{

    int size = height.size();
    int water = 0; // total water accumulated
    int maxLeft = 0, maxRight = 0;
    int maxHeight = height[0]; // biggest height
    int index = 0;             // index of biggest height

    for (int i = 1; i < size; i++)
    {
        if (height[i] > maxHeight)
        {
            maxHeight = height[i];
            index = i;
        }
    } // for finding max height in a array.

    for (int i = 0; i < index; i++)
    {
        if (maxLeft > height[i])
            water += (maxLeft - height[i]);
        else
            maxLeft = height[i];

    } // finding total water accumulated on the left side.

    for (int i = size - 1; i > index; i--)
    {
        if (maxRight > height[i])
            water += (maxRight - height[i]);
        else
            maxRight = height[i];
    } // finding total water accumulated on the right side.

    return water;
}

int main()
{
    int size, elem, pos;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "enter the height of building at [" << i << "] index : ";
        cin >> arr[i];
    }
    cout << "total water trapped : " << trap(arr);
    return 0;
}