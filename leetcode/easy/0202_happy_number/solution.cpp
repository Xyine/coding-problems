#include <algorithm>
#include <unordered_set>


class Solution {
public:
    int next(int n) {
        int m = 0;
        while (n != 0) {
            int digit = (n%10);
            m +=  digit * digit;
            n /= 10;
        }
        return m;
    }

    bool isHappy(int n) {
        int slow;
        int fast;

        while (fast != 1 && slow != fast) {
            slow = next(n);
            fast = next(next(n));
        }

        return true;
    }

    bool isHappy(int n) {
        std::unordered_set<int> seen;

        while (n != 1) {
            if (seen.count(n)) return false; // cycle détecté

            seen.insert(n);

            int m = 0;
            while (n != 0) {
                int digit = n % 10;
                m += digit * digit;
                n /= 10;
            }
            n = m;
        }

        return true;
    }
};