#include <bits/stdc++.h>
using namespace std;

int selection_sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int mini = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}


int main()
{
    vector<int> arr1 = {0, 5, 89, 6, 1, 45, 24, 53, 65};

    selection_sort(arr1);

    cout << "Sorted Array:";

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << " " << arr1[i];
    }
    cout << endl;
    return 0;
}