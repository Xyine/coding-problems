#include <vector>
#include <unordered_set>


class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> save;

        for (int n : nums) {
            if (save.count(n)) {
                return true;
            }

            save.insert(n);
        }
        return false;
    }
};