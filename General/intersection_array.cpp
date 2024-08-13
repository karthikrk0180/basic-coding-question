#include <bits/stdc++.h>
using namespace std;

void checkIntersection(int arr1[], int arr2[], int n)
{
    vector<int> common;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                common.push_back(arr1[i]);
                break;
            }
        }
    }

    cout << "Common elements: ";
    for (int i = 0; i < common.size(); i++)
    {
        cout << common[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;

    int arr1[n];
    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    checkIntersection(arr1, arr2, n);

    return 0;
}