#include <bits/stdc++.h>
using namespace std;

void duplicate(int arr[], int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if (arr[i] != arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(int k=0;k<i+1;k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    duplicate(arr,n);
}