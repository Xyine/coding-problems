# include <vector>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}


# include <unordered_map>


vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (seen.count(complement)) {
            return {seen[complement], i};
        } else {
            seen[nums[i]] = i;
        }
    }

    return {};
}


// One hashmap access
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        if (auto it = seen.find(target - nums[i]); it != seen.end()) {
            return {it->second, i};
        } else {
            seen[nums[i]] = i;
        }
    }

    return {};
}
