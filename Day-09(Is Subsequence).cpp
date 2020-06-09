/* 
Time complexity : O(n)
Space complexity : O(1)
My approach : Search in the string t the characters of string s in a single loop because the relative order of characters in s should be 
same as in the string t(subsequence).
*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int j=0;
        for(int i=0;i<m;i++)
        {
             if(t[i]==s[j])
             {
                 j++;
                 if(j==n)
                     return true;
             }
        }
        if (j!=n)
            return false;
       return true; 
    }
};
