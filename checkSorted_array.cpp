#include<bits/stdc++.h>
using namespace std;

bool checkSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if (arr[i]>=arr[i-1]){}
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    if (checkSort(arr, n))
    {
        cout << "Array is sorted." << endl;
    }
    else
    {
        cout << "Array is not sorted." << endl;
    }

}