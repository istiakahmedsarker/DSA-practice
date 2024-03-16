#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mS(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr)
{
    mS(arr, 0, arr.size() - 1);
}

int main()
{
    // Custom input
    vector<int> arr1 = {0, 5, 89, 6, 1, 45, 24, 53, 65};
    // Call mergeSort function
    mergeSort(arr1);

    // Print sorted array
    cout << "Sorted Array:";
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << " " << arr1[i];
    }
    cout << endl;
    return 0;
}
