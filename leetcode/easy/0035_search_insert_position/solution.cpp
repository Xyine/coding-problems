#include <vector>
#include <algorithm>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
}

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size();

    while (left < right) {
        int mid = (left + right) / 2;

        if (target > nums[mid]) {
            left = mid + 1;
        }
        else {
            right = mid;
        }
    }
    return left;
}
