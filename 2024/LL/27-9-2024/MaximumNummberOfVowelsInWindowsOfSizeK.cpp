class Solution {
public:
    int maxVowels(string s, int k) {
     

        int n=s.size();
        int maxi=INT_MIN;
        // if(n==1){
        //     return s[0];
        // }
        int l=0;
        int r=k;
        double window=0;
       int avg=0;
        int count=0;
        for(int i=0;i<k;i++){
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
           }
        }
       avg=count;
        while(r<n){
          
            int cameOut=s[l];
            int cameIn=s[r];
     if(cameOut=='a' || cameOut=='e' || cameOut=='i' || cameOut=='o' || cameOut=='u'){
                count--;
            }
     if(cameIn=='a' || cameIn=='e' || cameIn=='i' || cameIn=='o' || cameIn=='u'){
                count++;
            }
            avg=max(avg,count);
            l++;
            r++;
        }
       
        return  avg;
    }
};  
 LeetCode 75
LeetCode 75
0

avatar
Premium
Debugging...
Debugging...









1456. Maximum Number of Vowels in a Substring of Given Length
Solved
Medium
Topics
Companies
Hint
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
Example 2:

Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.
Example 3:

Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.
 