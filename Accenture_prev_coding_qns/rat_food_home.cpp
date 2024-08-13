#include <bits/stdc++.h>
using namespace std;

int checkFood(int r, int unit, int n, int arr[])
{
    if (n == 0)
        return -1;
    int foodRequired = unit * r;

    int foodEating = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            return -1;

        foodEating += arr[i];
        if (foodRequired <= foodEating)
        {

            return i + 1;
        }
    }

    if (foodRequired > foodEating)
    {
        return 0;
    }

    return -1;
}

int main()
{
    int r, unit, n;

    cin >> r >> unit >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = checkFood(r, unit, n, arr);
    cout << result << endl;

    return 0;
}