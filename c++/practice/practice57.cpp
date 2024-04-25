#include <iostream>
#include <vector>

using namespace std;

vector<int> findLongestPrefixSuffix(vector<int> &lps, string needle)
{
    int prefix = 0;
    int suffix = 1;
    while (suffix < needle.size())
    {
        if (needle[prefix] == needle[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++;
            suffix++;
        }
        else
        {
            if (prefix == 0)
            {
                lps[suffix] = 0;
                suffix++;
            }
            else
            {
                prefix = lps[prefix - 1];
            }
        }
    }
    return lps;
}

int findMatchingString(string haystack, string needle) // leetcode problem 28.
{
    vector<int> lps(needle.size(), 0);
    int first = 0, second = 0;
    findLongestPrefixSuffix(lps, needle);
    while (first < haystack.size() && second < needle.size())
    {
        if (haystack[first] == needle[second])
        {
            first++, second++;
        } // match
        else
        {
            if (second == 0)
                first++;
            else
                second = lps[second - 1];
        } // mismatch
    }
    if (second == needle.size())
        return first - second;
    else
        return -1;
}
int main()
{
    cout << findMatchingString("leetcode", "leeto");
    return 0;
}