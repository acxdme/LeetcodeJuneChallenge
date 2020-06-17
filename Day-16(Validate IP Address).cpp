/* 
Time complexity : O(1)
Space complexity : O(1)
My approach : Use of regex to match the pattern
RESOURCE: https://leetcode.com/articles/validate-ip-address/ 
*/

class Solution {
public:
    string validIPAddress(string IP) {
        regex v4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
        if(regex_match(IP,v4))
            return "IPv4";
        
        regex v6("((([0-9a-fA-F]){1,4})\\:){7}([0-9a-fA-F]){1,4}");
        if(regex_match(IP,v6))
            return "IPv6";
        
        return "Neither";
    }
};
