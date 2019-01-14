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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return isMirror(root->left, root->right);
    }
    bool isMirror(TreeNode* nL, TreeNode* nR){
        if(nL == NULL && nR == NULL)
            return true;
        if(nL == NULL || nR == NULL)
            return false;
        return (nL->val == nR->val) && isMirror(nL->left, nR->right) && isMirror(nL->right, nR->left);
    }
};
