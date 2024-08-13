#include <bits/stdc++.h>
using namespace std;

void checkPrime(int n)
{
    if (n <= 1)
    {
        cout << "False";
        exit(0);
    }

    for (int i = 2; i <= sqrt(n) ; i++)
    {
        if (n % i == 0)
        {
            cout << "False"<<endl;
            exit(0);
        }
    }
    cout << "True";
    
}

int main()
{
    int n;

    cin >> n;

    checkPrime(n);
    return 0;
}