/* 
Time complexity : O(logn)
Space complexity : O(1)
Approach : Use of Binary Search
*/
class Solution {
public:
    int hIndex(vector<int>& citations) {
        ios::sync_with_stdio(0);
        cin.tie(NULL);
        
        int n = citations.size();
        int low=0,high=n-1,mid;
        
        while(low<=high)
        {
            mid = low+(high-low)/2;
            if(citations[mid]==(n-mid)) // this the optimal case
                return citations[mid];
            else if(citations[mid]>(n-mid))
                high = mid-1;
            else
                low = mid+1;
        }
        return n-low;  //return this if citations[mid] < n-mid
    }
};
