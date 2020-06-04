/* 
Time complexity : O(n)
Space complexity : O(1)
My approach : Use of two pointer starting from different ends that swaps the respective characters
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
        
    }
};
