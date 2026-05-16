#include <string>


using namespace std;


class Solution {
public:
    long long pow(int base, int exp) {
        long long result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
        }
        return result;
    }

    int titleToNumber(string columnTitle) {
        int result = 0;
        for (int i = 0; i < columnTitle.size() ; i++) {
            int reverse_index = columnTitle.size() - i - 1;
            result += (columnTitle[i] - 64) * (pow(26, reverse_index));
        }
        return result;
    }

    int titleToNumber(string columnTitle) {
        int result = 0;
        for (char ch : columnTitle) {
            result = (ch - 'A' + 1) + result * 26;
        }
        return result;
    }
};
