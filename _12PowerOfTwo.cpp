#include <iostream>
#include <math.h>
using namespace std;

class PowerOfTwo
{
public:
    bool isPowerOfTwo(int n)
    {
        // Loop through possible powers of 2
        for (int i = 0; i <= 30; i++)
        {
            int ans = pow(2, i);
            if (ans == n)
            {
                return true;
            }
            // Prevent overflow
            if (ans > n)
            {
                break;
            }
        }
        return false;
    }
};

int main()
{
    PowerOfTwo obj;
    int number;

    // User input
    cout << "Enter a number: ";
    cin >> number;

    // Check if it's a power of two
    if (obj.isPowerOfTwo(number))
    {
        cout << number << " is a power of two." << endl;
    }
    else
    {
        cout << number << " is not a power of two." << endl;
    }

    return 0;
}