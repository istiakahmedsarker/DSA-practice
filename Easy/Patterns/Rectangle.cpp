#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (size_t j = n; j > i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (size_t j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (size_t j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n - i - n; j++)
        {
            cout << " ";
        }

        for (size_t j = 0; j < 2 * n + 1; j++)
        {
            cout << "*";
        }

        for (size_t j = 0; j < n - i - n; j++)
        {
            cout << " ";
        }
    }
}

int main()
{
    pattern8(5);
    cout << "" << endl;
    return 0;
}