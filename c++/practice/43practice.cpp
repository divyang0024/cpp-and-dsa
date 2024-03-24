#include <iostream>
using namespace std;

int equalSumSubArrs(int size, int array[])
{
    int sum = 0, ans;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    int prefix = 0;
    for (int i = 0; i < (size - 1); i++)
    {
        prefix += array[i];
        int ans = sum - prefix;
        if (ans == prefix)
            return ans;
    }
    return -1;
}

int main()
{
    int array[8] = {
    3,4,-2,5,8,20,-10,8
    };
    cout << equalSumSubArrs(8, array);
    return 0;
}