#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Declare a vector to store the elements
    vector<int> arr(n);

    // Input the elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Create a map to store the frequency of elements
    map<int, int> mpp;

    // Count the frequency of each element
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        // Print the frequency of the queried number
        cout << mpp[number] << endl;
    }
    cout << "" << endl;
    return 0;
}
