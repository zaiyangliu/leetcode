/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* nptr){
        return nptr == NULL ? 0 : max(maxDepth(nptr->left), maxDepth(nptr->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;
return (abs(maxDepth(root->left) - maxDepth(root->right)) <= 1  && isBalanced(root->left)  && isBalanced(root->right));
        }
};
