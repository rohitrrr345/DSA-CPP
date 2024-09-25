class Solution {
public:

    string largestNumber(vector<int>& nums) {
        auto mycmp=[](int &n1,int &n2){
    string s1=to_string(n1);
    string s2=to_string(n2);
    return s1+s2>s2+s1;
};
        sort(nums.begin(),nums.end(),mycmp);
       string result="";
       if(nums[0]==0){
        return "0";
       }
       for(int a:nums){
        result+=to_string(a);
       }
       return result;
    }

    Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.

 

Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"
 

};