#include <bits/stdc++.h>
using namespace std;

int productSmallestPair(int arr[], int n, int sum)
{
    if (n < 2)
        return -1;

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] + arr[i + 1] <= sum)
        {
            return arr[i] * arr[i + 1];
        }
    }
    return 0;
}

int main()
{
    int sum;
    cin >> sum;

    int n;
    cin >> n;

    if (n <= 0)
        return 0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = productSmallestPair(arr, n, sum);

    cout << result;
    return 0;
}