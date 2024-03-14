#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // ! Optimal approach
    int arr[] = {2, 5, 1, 7, 0};
    int largestElem = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(arr[i] > largestElem){
            largestElem = arr[i];
        }
    }

    cout << "largestElem: " << largestElem;
    cout << endl;
    return 0;
}
