class Solution {
public:
typedef pair<int,char>p;
    string frequencySort(string s) {
       int n =s.size();
       priority_queue<p>pq;
       string ans="";
       unordered_map<char,int>mpp;
       for(int i=0;i<n;i++){//this is o(n) time complexity over there
        mpp[s[i]]++;
       }
     for(auto &it:mpp){
        pq.push({it.second,it.first});
     }
     while(!pq.empty()){
        auto x=pq.top();
         pq.pop();
        for(int i=0;i<x.first;i++){
             ans+=x.second;
        }
        
     }
     return ans;

    }//451. Sort Characters By Frequency
//Solved
Medium
//Topics
Companies
Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

 

Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
 
};
