#include <iostream>
using namespace std;

class BitwiseComplement
{
public:
    int bitwiseComplement(int n)
    {
        int m = n;
        int mask = 0;

        // Special case for 0
        if (n == 0)
        {
            return 1;
        }

        // Create a mask with all bits set to 1 up to the most significant bit of n
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        // Compute bitwise complement
        int ans = (~n) & mask;
        return ans;
    }
};

int main() {
    BitwiseComplement obj;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Bitwise complement: " << obj.bitwiseComplement(number) << endl;

    return 0;
}
