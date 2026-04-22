# include<stdlib.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *soluce = malloc(2*sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (i == j) {
                continue;
            }
            else if (nums[i] + nums[j] == target) {
                soluce[0] = i;
                soluce[1] = j;
                return soluce;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}
