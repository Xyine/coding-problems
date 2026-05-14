int majorityElement(int* nums, int numsSize) {
    int seen = 0;
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            seen = nums[i];
        }
        count += (seen == nums[i]) ? 1 : -1;
    }
    return seen;
}
