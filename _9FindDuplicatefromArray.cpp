#include <iostream>
using namespace std;
#include <vector>

int findDuplicate(vector<int> &arr) {
    int ans = 0;
    // XOR ing all array element
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    // XOR [1, n - 1]
    for(int i =1; i < arr.size(); i++) {
        ans = ans ^ i;
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 3};
    cout << "Duplicate array is: " << findDuplicate(arr) << endl;
    return 0;
}