#include <iostream>
#include <vector>
using namespace std;

string defangIpAddress(string s)//leetcode problem 1108.
{
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '.')
            ans += s[i];
        else
            ans += "[.]";
    }
    return ans;
}

int checkRotatedByTwo(string a, string b)
{
    string c;
    string check;

    for (int i = 0; i < 2; i++)
    {
        c += a[a.size() - (2 - i)];
    }
    for (int i = 0; i < 2; i++)
    {
        check += b[i];
    }
    if (c == check)
    {
        cout << "the string is rotated clockwise.";
    }
    c = "";
    check = "";
    for (int i = 0; i < 2; i++)
    {
        c += a[i];
    }
    for (int i = 0; i < 2; i++)
    {
        check += b[b.size() - (2 - i)];
    }
    if (c == check)
    {
        cout << "the string is rotated anti-clockwise.";
    }
}

int checkIfPanagrm(string s)
{
    vector<bool> alphabet(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        alphabet[(s[i] - 'a')] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
            return 0;
    }
    return 1;
}

int main()
{
    // cout << defangIpAddress("255.255.255.255");
    // checkRotatedByTwo("amazon", "azonam");

    return 0;
}