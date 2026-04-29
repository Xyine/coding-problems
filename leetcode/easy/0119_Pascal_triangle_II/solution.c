/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int* row = malloc(*returnSize * sizeof(int));

    row[0] = 1;

    for (int i = 1; i < *returnSize; i++) {
        row[i] = row[i -1] * (*returnSize - i) / i;
    }

    return row;
}
