/*
Time complexity : O(1)
Space complexity :O(1)
My approach : Use of inbuilt function   __builtin_popcount(value)  to find the ones in the binary form of the number
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(__builtin_popcount(n)==1 and n>0)
            return true;
       return false;
        
    }
};
