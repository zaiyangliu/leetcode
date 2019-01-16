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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return nullptr;
        int mid = nums.size() / 2;
        TreeNode *node = new TreeNode(nums[mid]);
        auto leftTree = vector<int>(nums.begin(), nums.begin() + mid);
        auto rightTree = vector<int>(nums.begin() + mid + 1, nums.end());//自动转换类型，相当于写上vector<int>
            node->left = sortedArrayToBST(leftTree);
            node->right = sortedArrayToBST(rightTree);
        return node;
    }

};
