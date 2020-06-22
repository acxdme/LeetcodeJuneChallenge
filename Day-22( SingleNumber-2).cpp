/*
Time complexity : O(n)
Space complexity : O(1)
My approach : Perform  the summation place wise of the numbers(in binary form) and then take modulus by 3  , what remains is the answer.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int bits[32]={0};
        for(int i=0;i<32;i++)
        {
            for( int j :nums)
            {
                 bits[i] += j>>i & 1;
                 bits[i]%=3;
             }
        }
        int answer=0;
        for(int i=0;i<32;i++)
        {
            answer |= bits[i]<<i;
        }
        return answer;
    }
};
