#include <bits/stdc++.h>
using namespace std;

int differencesSum(int n, int m)
{
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 1; i <= m; i++)
    {
        if (i % n == 0)
        {
            sum1 = sum1 + i;
        }
        else
        {
            sum2 = sum2 + i;
        }
    }

    if (sum2 > sum1)
        return sum2 - sum1;
    else
        return sum1 - sum2;
}

int main()
{
    int n, m;
    int result;

    cin >> n;
    cin >> m;
    result = differencesSum(n, m);
    cout << result;
    return 0;
}