class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        string ans="";
        while(i<n){
            string temp="";
           while(s[i]==' '&& i<n){
               i++;
           } 
           while(s[i]!=' '&& i<n){
                 temp+=s[i];
                 i++;
           }
            if(temp.size()>0){
                 if(ans.size()==0){
                 ans=temp;
             }
             else{
                 ans=temp+" "+ans;
             }
            }
        }
       return ans;
    }
};
// 151. Reverse Words in a String
// Solved
// Medium
// Topics
// Companies
// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

// Example 1:

// Input: s = "the sky is blue"
// Output: "blue is sky the"
// Example 2:

// Input: s = "  hello world  "
// Output: "world hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.
// Example 3:
class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string>ans;
        bool check=false;
        string res="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(check==true && i!=n-1){
                    ans.push_back(" ");
                    check=false;
                }
                continue;
            }
            else{
                ans.push_back(s[i]);
                check=true;

            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
              res+=ans[i];
        }
        return res;
    }
};