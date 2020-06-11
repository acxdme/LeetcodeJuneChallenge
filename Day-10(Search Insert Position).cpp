/*
Time complexity : O(n) 
Space complexity : O(1)
Approach 1 : Traverse the array and compare the value of the element with the target.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int index;
        for(int i=0;i<nums.size();i++)
        {
            if(target>nums[nums.size()-1]) //if target is greater than the last element of the array.
            {
                index=nums.size();
                break;
            }
            if(nums[i]>=target)  // if target is greater than or equal to an element's value in the array. 
            {
                index=i;
                break;
            }
        }
     return index;   
    }
};

/*
Time complexity : O(logn)
Space complexity : O(1)
Approach 2 : Use of Binary Search to find the target index
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int start=0;
        int end=nums.size()-1;
        if(target>nums[nums.size()-1])
            return nums.size();
        int mid= start+(end-start)/2;
        while(end>start)
        {
            if(nums[mid]==target)
                return mid;
            if(nums[mid]> target)
                end=mid;
            else
                start=mid+1;
           mid=start+(end-start)/2; 
        }
        
        return start;
    }
};
