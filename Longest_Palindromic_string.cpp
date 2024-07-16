class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        int ans=0;
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        for(auto x:mpp){
            if(ans%2==0){
                ans+=x.second;
            }
            else {
              if(x.second%2==0){
                ans+=x.second;
              }
              else{
                ans+=x.second-1;
              }
            }
        }
        return ans;
    }
};
// Given a string s which consists of lowercase or uppercase letters, return the length of the longest 
// palindrome
//  that can be built with those letters.

// Letters are case sensitive, for example, "Aa" is not considered a palindrome.

 

// Example 1:

// Input: s = "abccccdd"
// Output: 7
// Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
// Example 2:

// Input: s = "a"
// Output: 1
// Explanation: The longest palindrome that can be built is "a", whose length is 1.
 

// Constraints:

// 1 <= s.length <= 2000
// s consists of lowercase and/or uppercase English letters only.
// Seen this question in a real interview before?
// 1/5
// Yes
// No
// Accepted
// 796K
// Submissions
// 1.4M
// Acceptance Rate
// 55.3%
// Topics
// Companies
// Similar Questions
// Discussion (182)

// Choose a type



// Copyright ©️ 2024 LeetCode All rights reserved

// 5.9K


// 182



