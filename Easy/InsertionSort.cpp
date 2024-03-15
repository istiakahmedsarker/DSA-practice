#include <bits/stdc++.h> // This line includes a library that helps us with our code.
using namespace std; // This line tells the computer that we are using things from the "std" library, so we don't need to write "std::" before everything.

int insertion_sort(vector<int> &arr) // This line is the start of a function called "insertion_sort". It takes in a list of numbers (we call it an "array").
{
    for (int i = 0; i < arr.size(); i++) // This line starts a loop that goes through each number in our list.
    {
        int j = i; // This line makes a new number, "j", and sets it to be the same as "i".
        while (j > 0 && arr[j - 1] > arr[j]) // This line starts another loop. It keeps going until "j" is 0 or until the number before "j" is not bigger than "j".
        {
            int temp = arr[j - 1]; // This line makes a new number, "temp", and sets it to be the same as the number before "j".
            arr[j - 1] = arr[j]; // This line puts the number at position "j" in the place where the number before it was.
            arr[j] = temp; // This line puts the number we saved as "temp" in position "j".
            j--; // This line makes "j" one smaller.
        }
    }
}

int main() // This line is the start of our main program.
{
    vector<int> arr1 = {0, 5, 89, 6, 1, 45, 24, 53, 65}; // This line makes a list of numbers called "arr1".

    insertion_sort(arr1); // This line asks the computer to sort our list of numbers.

    cout << "Sorted Array:"; // This line just prints out some words.

    for (int i = 0; i < arr1.size(); i++) // This line starts a loop that goes through each number in our sorted list.
    {
        cout << " " << arr1[i]; // This line prints out each number in our sorted list.
    }
    cout << endl; // This line just moves to the next line after we're done printing all the numbers.
    return 0; // This line tells the computer that our program ended successfully.
}
