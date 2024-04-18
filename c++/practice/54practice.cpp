#include <iostream>
#include <vector>
using namespace std;

int getInteger(char r) // leetcode problem 13
{
    switch (r)
    {
    case 'I':
    {
        return 1;
        break;
    }
    case 'V':
    {
        return 5;
        break;
    }
    case 'X':
    {
        return 10;
        break;
    }
    case 'L':
    {
        return 50;
        break;
    }
    case 'C':
    {
        return 100;
        break;
    }
    case 'D':
    {
        return 500;
        break;
    }
    case 'M':
    {
        return 1000;
        break;
    }
    default:
    {
        cout << "not a valid character";
        exit(1);
    }
    }
}
int romanNumeralToInteger(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (getInteger(s[i]) < getInteger(s[i + 1]))
        {
            sum -= getInteger(s[i]);
        }
        else
        {
            sum += getInteger(s[i]);
        }
    }
    sum += getInteger(s[s.size() - 1]);
    return sum;
}

void factorailOfLargeNumber(int N)
{
    vector<int> ans(1, 1);
    while (N > 1)
    {
        int carry = 0, res, size = ans.size();
        for (int i = 0; i < size; i++)
        {
            res = ans[i] * N + carry;
            carry = res / 10;
            ans[i] = res % 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
        --N;
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
}

int main()
{
    // cout << romanNumeralToInteger("VIVIX");
    factorailOfLargeNumber(20);
    return 0;
}