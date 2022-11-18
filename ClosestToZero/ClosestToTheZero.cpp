#include <iostream>
#include <algorithm>

using namespace std;

int findClosestToZero(int arr[], int n)
{
    int currentValue = 0;
    int closestValue = arr[0];
    sort(&arr[0], &arr[6]);

    for (int i = 0; i < n; i++)
    {
        currentValue = arr[i] * arr[i];
        if (currentValue <= (closestValue * closestValue))
        {
            closestValue = arr[i];
        }
    }
    return closestValue;
}

int main()
{

    int arr[] = {4, 5, -2, 2, 7, 15};

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findClosestToZero(arr, n);

    cout << "Closest number to zero is : " << result;

    return 0;
}