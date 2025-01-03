#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

class ReverseInteger {
public:
    int reverseInteger(int x) {
        int ans = 0;
        while (x != 0) {
            int digit = x % 10;
            // Check for overflow before updating `ans`
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                return 0;
            }
            ans = (ans * 10) + digit;
            x = x / 10;
        } 
        return ans;
    }
}; 

int main() {
    ReverseInteger ri;
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int result = ri.reverseInteger(number);
    cout << "Reversed integer: " << result << endl;

    return 0;
}
