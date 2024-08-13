#include <iostream>
using namespace std;

void printName(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << "Karthik "<<endl;
    printName(i + 1, n);
}

int main()
{
    int n = 3;
    int i=1;
    cin >> n;
    printName(1, n);
    return 0;
}
