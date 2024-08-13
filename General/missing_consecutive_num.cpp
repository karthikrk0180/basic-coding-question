#include <bits/stdc++.h>
using namespace std;

void checkMissing(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] - arr[i] != 1)
        {
            cout << arr[i] + 1 << " " << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    checkMissing(n, arr);

    return 0;
}