class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        
        int i     = 0;
        int index = 0;
        
        while(i < n) {
            char curr = chars[i];
            
            int count = 0;
            //Find count of duplicates
            while(i < n && chars[i] == curr) {
                i++;
                count++;
            }
            
            //Assign it to chars and move index ahead to add the count
            chars[index] = curr;
            index++;
            
            //add the count
            if(count > 1) {
                string count_str = to_string(count);
                for(char &ch : count_str) {
                    chars[index] = ch;
                    index++;
                }
            }
        }
        
        return index;
    }
};
// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

// countAndSay(1) = "1"
// countAndSay(n) is the run-length encoding of countAndSay(n - 1).
// Run-length encoding (RLE) is a string compression method that works by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string "3322251" we replace "33" with "23", replace "222" with "32", replace "5" with "15" and replace "1" with "11". Thus the compressed string becomes "23321511".

// Given a positive integer n, return the nth element of the count-and-say sequence.

 

// Example 1:

// Input: n = 4

// Output: "1211"

// Explanation:

// countAndSay(1) = "1"
// countAndSay(2) = RLE of "1" = "11"
// countAndSay(3) = RLE of "11" = "21"
// countAndSay(4) = RLE of "21" = "1211"
// Example 2:

// Input: n = 1

// Output: "1"

// Explanation:

// This is the base case.

 

// Constraints:

// 1 <= n <= 30
 

// Follow up: Could you solve it iteratively?
// Seen this question in a real interview before?
// 1/5
// Yes
// No
// Accepted
// 955.3K
// Submissions
// 1.7M
// Acceptance Rate
// 55.7%
// Topics
// Companies
// Hint 1
// Hint 2
// Hint 3
// Similar Questions
// Discussion (131)

// Choose a type



// Copyright ©️ 2024 LeetCode All rights reserved

// 4K


// 131



