#include <bits/stdc++.h>
using namespace std;

// ! Better approach
int betterApproach(vector<int> arr)
{
    int maxi = INT_MIN;
    for (size_t i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (size_t j = i; j < arr.size(); j++)
        {
            sum += arr[j];
            if(sum > maxi){
                maxi = sum;
            }
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << betterApproach(arr) << endl;
    return 0;
}