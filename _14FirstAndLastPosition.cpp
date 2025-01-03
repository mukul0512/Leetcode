#include <iostream>
using namespace std;

int firstPosition(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else if(key < arr[mid]) {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastPosition(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else if(key < arr[mid]) {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    int firstIndex = firstPosition(arr, 11, 3);
    cout << "first occurrence of the element 3 is at index " << firstIndex << endl;

    int lastIndex = lastPosition(arr, 11, 3);
    cout << "last occurrence of the element 3 is at index " << lastIndex << endl;
    return 0;
}