class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first= strs[0];
        string last=strs[strs.size()-1];
        int n =min(first.size(),last.size());
        int prefix=0;
        for(int i=0;i<n;i++){
            if(first[i]==last[i]){
                prefix++;
            }
            else{
                break;
            }
        }
        return first.substr(0,prefix);
    }
};
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 