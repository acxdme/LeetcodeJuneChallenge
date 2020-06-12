/* 
Time complexity : O(n)
Space complexity :O(1)
My approach : This problem is famously called The National Dutch Flag problem, in this we use three pointers low-mid-high , where mid 
traverse the array and swapping is done when a 0 or 2 occurs for array[mid] and pointers are incremented accordingly.
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int l=0,m=0,e=n-1;
        while(e>=m)
        {
            if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else
            {
                swap(nums[e],nums[m]);
                e--;
            }
            
        }
        
    }
};
