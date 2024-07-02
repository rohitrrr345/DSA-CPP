class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int res=0;
    for(int k=0;k<=31;k++){
        int cnt=0;
        int temp=(1<<k);
        for(int &num:nums){
            if((num & temp)==0){
                continue;
            }//mixing admire values 
            else{
                cnt++;
            }
        }
        if(cnt%3==1){
            res=(res|temp);
        }
    }
    return res;
    }
};

137. Single Number II
Solved
Medium
Topics
Companies
Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,3,2]
Output: 3
Example 2:

Input: nums = [0,1,0,1,0,1,99]
Output: 99
 

Constraints:

1 <= nums.length <= 3 * 104
-231 <= nums[i] <= 231 - 1
Each element in nums appears exactly three times except for one element which appears once.
Seen this question in a real interview before?
1/5
Yes
No
Accepted
591.6K
Submissions
940.9K
Acceptance Rate
62.9%