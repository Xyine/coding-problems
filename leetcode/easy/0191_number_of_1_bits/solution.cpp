#include <bitset>
#include <string>


class Solution {
public:
    int hammingWeight(int n) {
        int result = 0;
        std::string binary = std::bitset<32>(n).to_string();
        for (char s : binary) {
            if (s == '1') result++;
        }
        return result;
    }

    int hammingWeight(int n) {
        int result = 0;

        while (n != 0) {
            n = n & (n - 1);
            result++;
        }

        return result;
    }

    int hammingWeight(int n) {
        return __builtin_popcount(n);
    }
};
