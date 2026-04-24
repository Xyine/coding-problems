#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    auto last = unique(nums.begin(), nums.end());
    return distance(nums.begin(), last);
}
