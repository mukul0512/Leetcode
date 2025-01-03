#include <iostream>
using namespace std;
#include <cstdint>

class NumberOf1Bits
{
public:
    int numberOf1Bits(uint32_t n)
    {
        int count = 0;
        while (n != 0)
        {
            // Checking last bit
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};

int main()
{
    NumberOf1Bits obj;
    uint32_t num = 11;
    int res = obj.numberOf1Bits(num);
    cout << "Number of 1 bits: " << res << endl;
    return 0;
}