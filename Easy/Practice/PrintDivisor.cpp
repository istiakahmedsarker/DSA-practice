#include <bits/stdc++.h> // This line includes the necessary libraries for the code.
using namespace std; // This line declares that we're using the standard namespace.

// This function finds all the proper divisors of a given number n.
int pDivisor1(int n)
{
    // This loop iterates through all numbers from 1 up to the square root of n.
    for (int i = 1; i <= sqrt(n); i++)
    {
        // If i is a divisor of n (i.e., n is divisible by i without remainder)...
        if (n % i == 0)
        {
            // ...print i, which is a proper divisor of n.
            cout << i << " ";

            // If i is not equal to n/i, it means there's another divisor (n/i) that we haven't printed yet.
            // So, we print n/i as well.
            if (i != n / i)
                cout << n / i << " ";
        }
    }
}

// This is the main function where the program starts its execution.
int main()
{
    // We call the pDivisor1 function with the argument 36 and print the result.
    cout << pDivisor1(36) << endl;

    return 0; // We return 0 to indicate successful completion of the program.
}
