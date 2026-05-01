/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int* row = malloc(*returnSize * sizeof(int));

    long temp=1;
    row[0] = 1;

    for (int i = 1; i < *returnSize; i++) {
        temp= temp * (*returnSize - i) / i;
        row[i] =  temp;
    }

    return row;
}

// Note: We didnt actually need the variable temp. 
// But the test cases are such that multiplying in one case exceeds the int range, 
// and since we cannot change return type we have to take the long data type variable as temporary.
