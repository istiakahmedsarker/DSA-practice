#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {
        0,
        1,
        2,
        3,
        4,
        5,
        6,
        6,
        7,
        7,
    };
    int hash[8] = {0};

    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    if (q < arr.size())
    {
        cout << hash[q] << endl;
    }

    return 0;
}