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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return isMirror(root->left, root->right);
    }
    bool isMirror(TreeNode* left, TreeNode* right){
        queue<TreeNode*> qL, qR;
        qL.push(left);
        qR.push(right);
        while(!qL.empty() && !qR.empty()){
            TreeNode* nL = qL.front();
            TreeNode* nR = qR.front();
            qL.pop(), qR.pop();
            if(nL == NULL && nR == NULL)
                continue;
            if(nL == NULL || nR == NULL)
                return false;
            if(nL->val != nR->val)
                return false;
            qL.push(nL->left);
            qR.push(nR->right);
            qL.push(nL->right);
            qR.push(nR->left);
        }
        return true;
    }
};
