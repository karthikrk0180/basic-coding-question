#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;

    while (n > 0)
    {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }

    if (temp == rev)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }

    return  0;
}