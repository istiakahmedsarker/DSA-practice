#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ! Brute force approach
int sortArr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[1];
}

int main()
{
    vector<int> arr1 = {2, 5, 7, 9, 1, 3};

    cout << "2nd smallest:" << sortArr(arr1);
}

// ! Better approach
int selection_sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
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
    return arr[1];
}

int main()
{
    vector<int> arr1 = {2, 5, 7, 9, 1, 3};
    

    cout << "Sorted array:" << selection_sort(arr1);
    return 0;
}