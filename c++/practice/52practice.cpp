#include <iostream>
#include <vector>
using namespace std;

int longestPalindrome(string s) // leetcode problem 409
{
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (int i = 0; i < s.size(); i++) // storing all the occurances
    {
        if (s[i] >= 'a')
            lower[s[i] - 'a']++;
        else
            upper[s[i] - 'A']++;
    }

    int count = 0;
    bool haveOdd = 0;

    for (int i = 0; i < 26; i++) // counting longest palindrome
    {
        if (lower[i] % 2 == 0)
        {
            count += lower[i];
        }
        else
        {
            count += lower[i] - 1;
            haveOdd = 1;
        }

        if (upper[i] % 2 == 0)
        {
            count += upper[i];
        }
        else
        {
            count += upper[i] - 1;
            haveOdd = 1;
        }
    }
    return count + haveOdd;
}

string sortTheSentence(string s)
{
    vector<string> ans(10);
    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            temp += s[i];
        }
        else
        {
            int pos;
            pos = temp[temp.size() - 1];
            pos = pos - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp = "";
        }
        if (i == s.size() - 1)
        {
            int pos;
            pos = temp[temp.size() - 1];
            pos = pos - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp = "";
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != "")
        {
            temp += ans[i] + " ";
        }
    }
    temp.pop_back();
    return temp;
}
int main()
{
    // cout << longestPalindrome("abccccdd");
    cout << sortTheSentence("is2 sentence4 This1 a3");
    return 0;
}