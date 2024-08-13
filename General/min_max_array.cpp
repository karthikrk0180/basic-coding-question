#include <bits/stdc++.h>
using namespace std;

void minMaxArray(int n, int arr[])
{
    int min,max;
    min = max = arr[0];

    for(int i = 0; i< n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }

    cout << min <<endl;
    cout << max <<endl;

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

    minMaxArray(n,arr);

    return 0;
}