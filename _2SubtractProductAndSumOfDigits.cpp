#include <iostream>
using namespace std;

class SubtractProductAndSumOfDigits {
    public:
    int subtractProductAndSumOfDigits(int n) {
        int prod = 1;
        int sum = 0;
        while(n != 0) {
            int digit = n % 10;
            prod = prod * digit;
            sum = sum + digit;
            n = n / 10; 
        }
        int ans = prod - sum;
        return ans;
    }
};

int main() {
    SubtractProductAndSumOfDigits obj;
    int res = obj.subtractProductAndSumOfDigits(234);
    cout << res << endl;
    return 0;
}