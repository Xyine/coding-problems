// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Note: The returned array must be malloced, assume caller calls free().
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = malloc(100 * sizeof(int));
    struct TreeNode* stack[100];
    int top = -1;
    int count = 0;

    struct TreeNode* current = root;

    while (current || top != -1) {
        while (current) {
            stack[++top] = current;
            current = current->left;
        }

        current = stack[top--];
        result[count++] = current->val;
        current = current->right;
    }

    *returnSize = count;
    return result;
}
