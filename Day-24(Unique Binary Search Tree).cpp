/*
Time complexity : O(n2)
Space complexity : O(n)
My approach : Use of DP to calculate the catalyn numbers.
Resource : https://www.youtube.com/watch?v=CMaZ69P1bAc
*/

class Solution {
public:
    int numTrees(int n) {
        int a[n+1];
        memset(a,0,sizeof(a));
        a[0]=1;
        a[1]=1;
        int c=0;
        for(int i=2;i<n+1;i++)
        {
            for(int j=0;j<i;j++)
            {
                a[i]+=a[j]*a[i-j-1];
            }
        }
        return a[n];
    }
};
