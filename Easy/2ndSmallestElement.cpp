#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ! Brute force approach
int sortArr(vector<int> & arr){
    sort(arr.begin(),arr.end());
    return arr[1];
}

int main(){
    vector<int> arr1 = {2,5,7,9,1,3};

    cout << "2nd smallest:" << sortArr(arr1);
}