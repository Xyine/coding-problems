#include <cstdint>


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;

        for (int i = 0; i < 32; i++) {
            result <<= 1;        // décale result vers la gauche
            result |= (n & 1);   // ajoute le dernier bit de n
            n >>= 1;             // décale n vers la droite
        }

        return result;
    }
};
