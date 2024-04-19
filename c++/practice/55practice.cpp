#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int largestCharContigousSubArray(string s)
{
    int len = 0, first = 0, second = 0;
    vector<bool> count(256, 0);
    while (second < s.size())
    {
        while (count[s[second]])
        {
            count[s[first]] = 0;
            first++;
        }
        count[s[second]] = 1;
        len = max(len, (second - first + 1));
        second++;
    }
    return len;
}

int main()
{
    cout << largestCharContigousSubArray("dvdf");
    return 0;
}