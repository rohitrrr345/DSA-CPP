class Solution {
public:
typedef pair<int,char>p;
    string frequencySort(string s) {
       int n =s.size();
       priority_queue<p>pq;
       string ans="";
       unordered_map<char,int>mpp;
       for(int i=0;i<n;i++){
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

    }
};