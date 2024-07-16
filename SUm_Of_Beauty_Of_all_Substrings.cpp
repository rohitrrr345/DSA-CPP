class Solution {
public:
    int beautySum(string s) {
        int n=s.size(),ans=0;
        for(int i=0;i<n;i++){
          map<char,int>m;
           
            for(int j=i;j<n;j++){
                 int maxi=INT_MIN;
            int mini=INT_MAX;
                m[s[j]]++;
               for(auto &c:m){
               maxi=max(maxi,c.second);
               mini=min(mini,c.second);
               }
               ans+=(maxi-mini);
            } 
        }
        return ans;
       
    }
};
// The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

// For example, the beauty of "abaacc" is 3 - 1 = 2.
// Given a string s, return the sum of beauty of all of its substrings.

 

// Example 1:

// Input: s = "aabcb"
// Output: 5
// Explanation: The substrings with non-zero beauty are ["aab","aabc","aabcb","abcb","bcb"], each with beauty equal to 1.
// Example 2:

// Input: s = "aabcbaa"
// Output: 17