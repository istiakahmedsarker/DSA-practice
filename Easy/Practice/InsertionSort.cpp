#include <bits/stdc++.h>
using namespace std;

int insertion_sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main()
{
    vector<int> arr1 = {0, 5, 89, 6, 1, 45, 24, 53, 65};

    insertion_sort(arr1);

    cout << "Sorted Array:";

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << " " << arr1[i];
    }
    cout << endl;
    return 0;
}