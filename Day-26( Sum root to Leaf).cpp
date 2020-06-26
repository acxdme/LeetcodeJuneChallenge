/*
Time complexity : O(n) 
Space complexity : O(n)
My approach : Find the sum of each root to leaf path using recursion .
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
public:
int summer(TreeNode* node, int v)
{
    if(node==NULL)
        return 0;
    
    v=(10*v + node->val);
    
    if(node->left==NULL and node->right==NULL)
        return v;
    
    return summer(node->left,v) + summer(node->right,v);
}
    int sumNumbers(TreeNode* root) {
        int result=0;
        result= summer(root,result);
      return result;
    }
};
