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
    vector<vector<int>> levelOrder(TreeNode* root) {
      queue<TreeNode* > q;
      vector<vector<int>> v;
      vector<int> tmp;
      if(root == NULL) return {};
      tmp.push_back(root->val); q.push(root); v.push_back(tmp);
      while(!q.empty()){
	int size = q.size();
	vector<int> tmp;
	for(int i = 0; i < size; ++i){
	  TreeNode* n = q.front();
	  q.pop();
	  if(n->left){
	    tmp.push_back(n->left->val);
	    q.push(n->left);
	  }
	  if(n->right){
	    tmp.push_back(n->right->val);
	    q.push(n->right);
	  }

	}
	if(!tmp.empty())
	  v.push_back(tmp);
      }
      return v;
        
    }
};
