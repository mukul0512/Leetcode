#include <iostream>
#include <math.h>
using namespace std;

class IsPowerOfTwo {
    public:
    bool isPowerOfTwo(int n) {
        for(int i = 0; i <= n; i++) {
            int ans = pow(2, 1);
            if(ans == n) {
                return true;
            }
            if(ans < INT_MAX / 2) {
                ans = ans * 2;
            }
        }
        return false;
    }
};

int main() {
       IsPowerOfTwo obj;

    int num = 30; 
    if (obj.isPowerOfTwo(num)) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is NOT a power of 2." << endl;
    }
    return 0;
}