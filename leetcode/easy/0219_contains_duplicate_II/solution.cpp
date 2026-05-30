#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;

        for (int i = 0; i < nums.size(); i++) {
            int value = nums[i];

            if (lastIndex.count(value)) {
                if (i - lastIndex[value] <= k) {
                    return true;
                }
            }

            lastIndex[value] = i;
        }

        return false;
    }
};
