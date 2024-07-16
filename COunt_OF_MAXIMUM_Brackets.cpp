class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int maxi=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            else if (s[i]==')'){
                count--;

            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};
// Maximum Nesting Depth of the Parentheses
// Solved
// Easy
// Topics
// Companies
// Hint
// Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.

 

// Example 1:

// Input: s = "(1+(2*3)+((8)/4))+1"

// Output: 3

// Explanation:

// Digit 8 is inside of 3 nested parentheses in the string.

// Example 2:

// Input: s = "(1)+((2))+(((3)))"

// Output: 3

// Explanation:

// Digit 3 is inside of 3 nested parentheses in the string.

// Example 3:

// Input: s = "()(())((()()))"

// Output: 3