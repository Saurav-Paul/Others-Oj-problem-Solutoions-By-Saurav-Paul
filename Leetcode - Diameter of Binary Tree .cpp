
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    pair<int,int> dfs(TreeNode* root){
        if(root == NULL) return {0,0} ;
        
        pair<int,int> left = dfs(root->left) ;
        pair<int,int> right = dfs(root->right) ;
        int diameter = max({left.second,right.second,left.first+right.first}) ;
        
        return {max(left.first,right.first)+1 , diameter} ;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return dfs(root).second ;
    }
};
