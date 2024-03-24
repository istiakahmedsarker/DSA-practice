#include <bits/stdc++.h>
using namespace std;

int problem1(int n)
{
    if (n < 0)
        return 0;
    cout << n << " ";
    problem1(n - 1);
}

int num = 0;

int problem2(int n)
{
    if (n == 0)
        return 0;
    cout << num << " ";
    num++;
    problem2(n - 1);
}

void problemArray(int i, int n, vector<int> &arr)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i]);
    problemArray(i + 1, n, arr);
}

int fibonacci(int n){
    if(n<= 1) return n;

    int last = fibonacci(n-1);
    int sLast = fibonacci(n-2);

    return last + sLast;
}

int main()
{
    // vector<int> arr = {1, 2, 3, 4, 2};
    // problemArray(0, arr.size()-1, arr); // Pass arr.size() instead of arr.size() - 1
    // for (int num : arr)
    // {
    //     cout << num << " ";
    // }
    cout << fibonacci(150) << endl;
    return 0;
}