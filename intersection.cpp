// class Solution {
// public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int last=-1;
        sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
         vector<int> ans;
         int i=0;
         int j=0;
         while(i<n && j<m){
            if(nums1[i]==nums2[j]){
               if(last!=nums1[i]){ 
                 ans.push_back(nums1[i]);
                 last =nums1[i]; 
               }
               i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
         }
         return ans;

    }
// };

//using the set approach

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> s;
        unordered_set<int> intt;
        for(int i = 0 ; i < nums1.size() ; i++){
            s.insert(nums1[i]);
        }
        for(int i = 0; i < nums2.size() ; i++){
            if(s.find(nums2[i])!=s.end()){
                intt.insert(nums2[i]);
            }
        }
        for(auto it : intt){
            ans.push_back(it);
            //if(s.find(nums2[i])!=s.end()){
               // intt.insert(nums2[i]);
            }
        }
        return ans;
    }
};