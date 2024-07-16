class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
       unordered_map<char,char>mpp1;
       
         unordered_map<char,char>mpp2;
          for(int i=0;i<n;i++){
            char ch1=s[i];
            char ch2=t[i];
            if((mpp1.find(ch1)!=mpp1.end() && mpp1[ch1]!=ch2) || (mpp2.find(ch2)!=mpp2.end() && mpp2[ch2]!=ch1)){
                return false;
            }
            mpp1[ch1]=ch2;
            mpp2[ch2]=ch1;
          }
          return true;//

    }
};
// 205. Isomorphic Strings
// Solved
// Easy
// Topics
// Companies
// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true