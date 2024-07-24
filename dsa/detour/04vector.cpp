#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr(5);
    arr = {
        1, 2, 3, 4, 5};
    arr.insert(arr.begin() + 1, 2);
    arr.erase(arr.begin() + 1);
    for (int i : arr)
    {
        cout << i << ",";
    }
    cout << find(arr.begin(), arr.end(), 2) - arr.begin();
    return 0;
}