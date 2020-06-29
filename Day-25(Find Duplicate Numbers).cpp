/* 
Time complexity : O(n* log n)
Space complexity : O(1)
My approach : Sort the given array nums, then find the duplicate number by simply comparing the adjacent elements in nums in linear time
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                return nums[i];
            }
            
        }
     return -1;
    }
};
