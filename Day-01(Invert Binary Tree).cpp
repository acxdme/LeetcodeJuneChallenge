/*
Time complexity : O(n) 
Space complexity : O(n)  Space if required for recursion stack
*/

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
void helper (TreeNode* root)
{
    if(root==NULL)
        return;
    helper(root->left);
    helper(root->right);
    
    TreeNode* temp= root->right;
    root->right=root->left;
    root->left=temp;
    
    return;
}
public:
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        
        return root;
        
    }
};

