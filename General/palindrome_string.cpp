#include <bits/stdc++.h>
using namespace std;

int checkPalindrome(string &str)
{

    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0;
        }

        start++;
        end--;
    }
    return 1;
}

int main()
{
    string str;

    getline(cin, str);

    if (checkPalindrome(str))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}