#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
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
        else  // key < arr[mid]
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    int evenIndex = binarySearch(even, 6, 12);
    int oddIndex = binarySearch(odd, 5, 8);
    cout << "evenIndex of 12 is " << evenIndex << endl;
    cout << "oddIndex of 12 is " << oddIndex << endl;
    return 0;
}