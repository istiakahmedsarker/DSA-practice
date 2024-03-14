#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ! brute force approach

int sortArr(vector<int>& arr)
{

    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}


int main()
{
    vector<int> arr1 = {2, 5, 1, 7, 0};

    cout << "largestElem: " << sortArr(arr1);
    cout << endl;
    return 0;
}

// ! Optimal approach
int main()
{
    int arr[] = {2, 5, 1, 7, 0};
    int largestElem = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] > largestElem)
        {
            largestElem = arr[i];
        }
    }

    cout << "largestElem: " << largestElem;
    cout << endl;
    return 0;
}
