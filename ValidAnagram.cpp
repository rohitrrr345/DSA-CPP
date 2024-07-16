class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(26,0);
        if(s.length()!=t.length()){
            return false;
        }
       for(int i=0;i<s.length();i++){
           hash[s[i]-'a']++;
           hash[t[i]-'a']--;
       }
       for(int i=0;i<hash.size();i++){
           if(hash[i]!=0){
               return false;
           }
       }
        return true;
    }
};
// 242. Valid Anagram
// Solved
// Easy
// Topics
// Companies
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false
 

// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.