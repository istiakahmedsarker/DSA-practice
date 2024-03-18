#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 121;
    int i = 121;
    int palindromeNum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        palindromeNum = (palindromeNum * 10) + digit;
        n = n / 10;
    }

    if (palindromeNum == i)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}