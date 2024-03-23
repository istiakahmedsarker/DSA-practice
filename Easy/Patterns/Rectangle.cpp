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
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (size_t j = 0; j < (2 * n + 1) - (i * 2); j++)
        {
            cout << "*";
        }

        for (size_t j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    for (size_t i = 0; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }

        for (size_t j = 0; j < stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern11(int n)
{
    int start = 1;
    for (size_t i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;
        for (size_t j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}

void pattern12(int n)
{
    for (size_t i = 1; i <= n; i++)
    {
        // first nums
        for (size_t j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (size_t j = 0; j < (n * 2) - (i * 2); j++)
        {
            cout << " ";
        }

        // second nums
        for (size_t j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int counts = 1;
    for (size_t i = 0; i <= n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout << counts << " ";
            counts++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (size_t i = 0; i <= n; i++)
    {
        for (char a = 'A'; a <= 'A' + i; a++)
        {
            cout << a;
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (size_t i = n; i > 0; i--)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    for (size_t i = 0; i <= n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        // first space
        for (size_t j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (size_t j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // second space
        for (size_t j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    };
}

void pattern21(int n)
{
    for (size_t i = 0; i <= n; i++)
    {
        for (size_t j = 0; j <= n; j++)
        {
            if (i == n || j == n || i == 0 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    for (size_t i = 0; i < 2 * n - 1; i++)
    {

        for (size_t j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int bottom = j;
            int left = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;
            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}

int main()
{
    pattern22(6);
    cout << "" << endl;
    return 0;
}