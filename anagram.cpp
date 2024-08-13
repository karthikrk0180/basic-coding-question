#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string str1, string str2)
{
    sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        return str1 == str2;
}

int main()
{

    string str1;
    string str2;

    getline(cin, str1);
    getline(cin, str2);

    if (checkAnagram(str1, str2))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False";
    }
    return 0;
}