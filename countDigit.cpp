#include <bits/stdc++.h>
using namespace std;


// int count (int n)
// {
//     int count = (int)(log10(n)+1);
//     return count;
// }


int main()
{
    int n;
    int count = 0;
    cin >> n;

    // int num = count(n);
    // cout << num;

    while (n>0)
    {
        int lastDigit = n%10;
        count++;
        n = n/10;
    }
    cout << count;

    return 0;
    

}

