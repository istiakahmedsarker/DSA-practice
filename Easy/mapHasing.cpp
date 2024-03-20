#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    map<int, int> mpp;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl; 
    }
    int q;
    cin >> q;
    while (q--)
    {
        {
            int number;
            cin >> number;
            cout << mpp[number] << endl;
        }

        cout << "" << endl;
        return 0;
    }
}