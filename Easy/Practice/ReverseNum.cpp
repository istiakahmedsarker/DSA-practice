#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1234567;
    int reverseNum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        reverseNum = (reverseNum * 10) + digit;
        n = n / 10;
    }

    cout << reverseNum << endl;
    return 0;
}