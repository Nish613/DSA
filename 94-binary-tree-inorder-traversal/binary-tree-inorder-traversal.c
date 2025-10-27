/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


void inorderFill(struct TreeNode* root, int* arr, int* idx) {
    if (root != NULL) {
        inorderFill(root->left, arr, idx);
        arr[(*idx)++] = root->val;
        inorderFill(root->right, arr, idx);
    }
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(1000 * sizeof(int));
    *returnSize = 0;
    inorderFill(root, result, returnSize);
    return result;
}
