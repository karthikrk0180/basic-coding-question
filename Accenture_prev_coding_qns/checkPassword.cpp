#include <bits/stdc++.h>
using namespace std;

int checkPassword(char str[], int n)
{
    if (n < 4)
    {
        return 0;
    }

    if (isdigit(str[0]))
    {
        return 0;
    }

    int cap = 0;
    int num = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ' || str[i] == '/')
            return 0;

        if (isupper(str[i]))
        { // Check if the character is uppercase
            cap++;
        }
        else if (isdigit(str[i]))
        { // Check if the character is a digit
            num++;
        }
    }
    return cap > 0 && num > 0;
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    char *str = &s[0];
    cout << checkPassword(str, n);
}