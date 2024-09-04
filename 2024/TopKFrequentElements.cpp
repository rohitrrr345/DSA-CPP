class Solution {
public:
typedef pair<int,int>p;

    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        int n=nums.size();
       vector<int>ans;
       int i=0;
       priority_queue<p>pq;
       unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto &it:mpp){
        pq.push({it.second,it.first});
     }
     while(!pq.empty() && i<k){
        auto a=pq.top();
        ans.push_back(a.second);
        pq.pop();
        i++;
     }
     return ans;
    }
};
347. Top K Frequent Elements
Solved
Medium
Topics
Companies
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
 