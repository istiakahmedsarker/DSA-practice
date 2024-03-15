#include <bits/stdc++.h>
using namespace std;

int bubble_sort(vector<int> & arr){
    for (int i = arr.size() -1; i >= 0; i--)
    {
        //  for optimization
        int didSwap = 0;
        for (int j = 0; j <= i -1; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                //  for optimization
                didSwap = 1;
            }
        }
        //  for optimization
        if(didSwap == 0){
            break;
        }
        
    }
    
}

int main() {
    vector<int> arr1 = {0, 5, 89, 6, 1, 45, 24, 53, 65};

    bubble_sort(arr1);

    cout << "Sorted Array:";

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << " " << arr1[i];
    }
    cout << endl;
    return 0;
}