class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN;
        if(n==1){
            return nums[0];
        }
        int l=0;
        int r=k;
        double window=0;
        double avg=INT_MIN;
        for(int i=0;i<k;i++){
            window+=nums[i];
        }
        avg=window/k;
        while(r<n){
          
            int cameOut=nums[l];
            int cameIn=nums[r];
            window=window-cameOut+cameIn;
            avg=max(avg,window/k);
            l++;
            r++;
        }
       
        return  avg ;
    }
};
643. Maximum Average Subarray I
Solved
Easy
Topics
Companies
You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
Example 2:

Input: nums = [5], k = 1
Output: 5.00000
 

Constraints:

n == nums.length
1 <= k <= n <= 105
-104 <= nums[i] <= 104