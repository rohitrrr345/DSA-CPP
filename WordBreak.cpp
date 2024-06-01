class Solution {
public:
unordered_set<string> st;
int n;
bool solve(int id,string &s){
    if(id>=n){
        return true;
    }
    if(st.find(s)!=st.end()){
        return true;
    }
    for(int i=1;i<=n;i++){
        string temp=s.substr(id,i);
        if(st.find(temp)!=st.end() && solve(id+i,s)){
            return true;
        }
    }
    return false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
         n=s.length();
       for(string &word:wordDict){
        st.insert(word);
       }
      return solve(0,s);
    }
};