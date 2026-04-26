#include <stdbool.h>
#include <stdio.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isMirror(struct TreeNode* left, struct TreeNode* right) {
    if (left == NULL || right == NULL) {
        return left == right;
    }

    return left->val == right->val
        && isMirror(left->left, right->right)
        && isMirror(left->right, right->left);
}

bool isSymmetric(struct TreeNode* root) {
    return isMirror(root->left, root->right);
}