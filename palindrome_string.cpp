#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string &str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (tolower(str[left]) != tolower(str[right]))
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main()
{
    string str;

    getline(cin, str);

    int result = isPalindrome(str);

    if (result)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}