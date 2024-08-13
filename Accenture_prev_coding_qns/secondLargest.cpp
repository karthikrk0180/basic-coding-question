#include <bits/stdc++.h>
using namespace std;

int secLargestSum(vector<int> &arr)
{
    int length = arr.size();

    if (length < 3)
    {
        return 0;
    }

    int max1_even = INT_MIN, max2_even = INT_MIN;
    int min1_odd = INT_MAX, min2_odd = INT_MAX;

    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] > max1_even)
            {
                max2_even = max1_even;
                max1_even = arr[i];
            }
            else if (arr[i] > max2_even)
            {
                max2_even = arr[i];
            }
        }
        else
        {
            if (arr[i] < min1_odd)
            {
                min2_odd = min1_odd;
                min1_odd = arr[i];
            }
            else if (arr[i] < min2_odd)
            {
                min2_odd = arr[i];
            }
        }
    }

    return max2_even + min2_odd;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = secLargestSum(arr);
    cout << result << endl;
    return 0;
}