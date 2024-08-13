#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
    cout << str;
}

int main()
{
    string str;

    getline(cin, str);

    reverseString(str);
    return 0;
}