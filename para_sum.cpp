#include<bits/stdc++.h>
using namespace std;

void print(int i, int sum)
{
    if (i<1){
        cout << sum;
        return;
    }
    print(i-1,sum+i);

}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    print(n,sum);
    return 0;
}