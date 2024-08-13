#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int l,int r)
{
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}
int main()
{
    int arr[]={1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
    return  0;
}