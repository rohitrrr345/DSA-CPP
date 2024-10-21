class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
    int left = 0, result = 0;
    unordered_map<char, int> count;

    for (int right = 0; right < n; right++) {
        count[s[right]]++;  
        
        
        while (count['a'] > 0 && count['b'] > 0 && count['c'] > 0) {
    
            result += n - right;
            
            // Shrink the window from the left
            count[s[left]]--;
            left++;
        }
    }

    return result;


        

    }
};
358. Number of Substrings Containing All Three Characters
Solved
Medium
Topics
Companies
Hint
Given a string s consisting only of characters a, b and c.

Return the number of substrings containing at least one occurrence of all these characters a, b and c.

 

Example 1:

Input: s = "abcabc"
Output: 10
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
Example 2:

Input: s = "aaacb"
Output: 3
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb". 
Example 3:

Input: s = "abc"
Output: 1
 