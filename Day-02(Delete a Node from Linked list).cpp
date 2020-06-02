/* 
Time complexity :  O(n)
Space complexity : O(1)
My approach : Slide the value of the node(which is to be deleted) to the last node of the linked list and delete it then.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */                                     // 4 1 9 5
class Solution {                                          
public:
    void deleteNode(ListNode* node) {
        
        ListNode* temp=node;
        
        int x;

         while(temp->next!=NULL)
         {
             temp=temp->next;
             x=temp->val;
             temp->val=node->val;
             node->val=x;
             if(temp->next!=NULL)
              node=node->next;
                 
         }
        node->next=NULL;
        
        
    }
};
