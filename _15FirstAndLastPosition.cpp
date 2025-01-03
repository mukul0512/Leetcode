#include <iostream>
#include <vector>
using namespace std;

int firstPosition(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastPosition(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstPosition(arr, n, k);
    p.second = lastPosition(arr, n, k);
    return p;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    pair<int, int> result = firstAndLastPosition(arr, 11, 3);
    cout << "first and last occurrence of the element 3 is at index (" << result.first << ", " << result.second << ")" << endl;
    return 0;
}