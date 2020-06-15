*/
Time complexity : O(n)
Space complexity : O(n)
My approach : Use the property of BST to traverse the tree and return the node if a match is found
*/

class Solution {
public:
     
    TreeNode* answer=NULL;

    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
            return NULL;
        if(root->val==val)           
            return root;
        if(val < root->val )
            answer=searchBST(root->left,val);
        else
            answer=searchBST(root->right,val);
        return answer;
    }
};
