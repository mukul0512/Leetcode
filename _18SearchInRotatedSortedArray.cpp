#include <iostream>
#include <vector>
using namespace std;

int getPivotElement(vector<int> &arr, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int binarySearch(vector<int> &arr, int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right walla part
        if (key > arr[mid])
        {
            start = mid + 1;
        } // go to left walla part
        else // key < arr[mid]
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(vector<int> &arr, int n, int k)
{
    int pivotElement = getPivotElement(arr, n);
    if (k >= arr[pivotElement] && k <= arr[n - 1])
    { // Binary search on line 2nd
        return binarySearch(arr, pivotElement, n - 1, k);
    }
    else
    { // Binary search on line
        return binarySearch(arr, 0, pivotElement - 1, k);
    }
}

int main()
{
    vector<int> arr = {7, 9, 1, 2, 3};
    int position = findPosition(arr, 5, 2);
    if (position != -1)
    {
        cout << "Position in rotated sorted array is: " << position << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}