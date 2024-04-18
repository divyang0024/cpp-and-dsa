#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

string sortVowelInAString(string s) // leetcode problem 2785.
{
    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') || (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'))
        {
            temp += s[i];
        }
    }
    sort(temp.begin(), temp.end());
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') || (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'))
        {
            s[i] = temp[count];
            count++;
        }
    }
    return s;
}

string addStrings(string num1, string num2) // leetcode problem 451.
{
    string maxStr = (num1.size() > num2.size()) ? num1 : num2;
    string minStr = (num1.size() <= num2.size()) ? num1 : num2;
    int sizeMax = maxStr.size() - 1;
    int sizeMin = minStr.size() - 1;
    int sum = 0;
    int temp = 0;
    bool carryForward = 0;
    string ans;
    for (int i = sizeMax; i >= 0; i--)
    {
        int subBy = sizeMin >= 0 ? minStr[sizeMin] : '0';
        if (carryForward == 1)
            temp = (maxStr[i] - '0') + (subBy - '0') + 1;
        else
            temp = (maxStr[i] - '0') + (subBy - '0');
        if (temp > 9)
        {
            if (i == 0)
            {
                sum = temp;
            }
            else
            {
                carryForward = 1;
                sum = temp % 10;
            }
        }
        else
        {
            carryForward = 0;
            sum = temp;
        }
        --sizeMin;
        ans += to_string(sum);
    }

    if (num1.size() - 1 < 1 && num2.size() - 1 < 1)
    {
        return ans;
    }
    reverse(ans.begin(), ans.end());
    if (maxStr.size() < ans.size())
    {
        swap(ans[0], ans[1]);
    }

    return ans;
}

int main()
{
    // cout << ('8' - '0') + ('8' - '0');
    cout << addStrings("123", "11");
    return 0;
}