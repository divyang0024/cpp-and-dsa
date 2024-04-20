#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int largestCharContigousSubArray(string s) // leetcode problem 3.
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

int smallestDistinctWindow(string s)
{
    int len = s.size(), first = 0, second = 0, distinct = 0, i = 0;
    vector<int> count(256, 0);
    while (first < s.size()) // dinding number of distinct characters in a string.
    {
        if (count[s[first]] == 0)
            distinct++;

        count[s[first]]++;
        first++;
    }
    first = 0;
    for (int i = 0; i < 256; i++)
        count[i] = 0;

    while (second < s.size())
    {
        while (distinct && (second < s.size()))
        {
            if (count[s[second]] == 0)
                distinct--;

            count[s[second]]++;
            second++;
        }
        len = min(len, second - first);
        while (distinct != 1)
        {
            len = min(len, second - first);
            count[s[first]]--;

            if (count[s[first]] == 0)
            {
                distinct++;
            }
            first++;
        }
    }
    return len;
}

int main()
{
    // cout << largestCharContigousSubArray("dvdf");
    cout << smallestDistinctWindow("aabbbcbbac");
    return 0;
}