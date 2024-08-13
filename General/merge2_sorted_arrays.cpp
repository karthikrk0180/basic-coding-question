#include <bits/stdc++.h>
using namespace std;

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a,
                                           vector<long long> &b)
{
    int n = a.size();
    int m = b.size();

    long long arr3[n + m];
    int left = 0;
    int right = 0;

    int index = 0;

    // Merge the two arrays into arr3[]
    while (left < n && right < m)
    {
        if (a[left] <= b[right])
        {
            arr3[index] = a[left];
            left++, index++;
        }
        else
        {
            arr3[index] = b[right];
            right++, index++;
        }
    }

    // Copy any remaining elements of a[]
    while (left < n)
    {
        arr3[index++] = a[left++];
    }

    // Copy any remaining elements of b[]
    while (right < m)
    {
        arr3[index++] = b[right++];
    }

    // Copy the merged elements back to a[] and b[]
    for (int i = 0; i < m + n; i++)
    {
        if (i < n)
        {
            a[i] = arr3[i];
        }
        else
        {
            b[i - n] = arr3[i];
        }
    }
}

int main()
{
    vector<long long> a = {1, 3, 5, 7};
    vector<long long> b = {2, 4, 6, 8};

    // Merge arrays a[] and b[] without using extra space
    mergeTwoSortedArraysWithoutExtraSpace(a, b);

    // Output the merged arrays
    cout << "Merged first array: ";
    for (long long i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Merged second array: ";
    for (long long i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
