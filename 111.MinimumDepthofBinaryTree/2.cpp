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
int minDepth(TreeNode* root){
  if(root == NULL) return 0;
  queue<TreeNode*> q;
  q.push(root);
  int hight = 0;
  while(!q.empty()){
    hight++;
    int len = q.size();
    for(int i = 0; i < len; i++){
      TreeNode* nptr = q.front();
      if(nptr->left)
        q.push(nptr->left);
      if(nptr->right)
        q.push(nptr->right);
      q.pop();
      if(nptr->left == NULL && nptr->right == NULL)
        return hight;
    }
  }
  return -1;  //不太明白为什么要return -1；
}

};
