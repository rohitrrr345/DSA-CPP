class Solution {
public:
    bool check(int s){//reverse hits are the common  task that are in the new demand topology that still remains
        int cnt=0;
        int j=1;
       while(j<s){
           if(s%j==0){
               cnt++;
           }
           j++;
       }
        return cnt==2;
    }
    int nonSpecialCount(int l, int r) {
       int i=l;
        int ans=0;
        while(i<=r){
            if(!check(i)){
                ans++;
                
            }
            i++;
        }
        return ans;
    }
};

// 3233. Find the Count of Numbers Which Are Not Special
// Attempted
// Medium
// Companies
// Hint
// You are given 2 positive integers l and r. For any number x, all positive divisors of x except x are called the proper divisors of x.

// A number is called special if it has exactly 2 proper divisors. For example:

// The number 4 is special because it has proper divisors 1 and 2.
// The number 6 is not special because it has proper divisors 1, 2, and 3.
// Return the count of numbers in the range [l, r] that are not special.

 

// Example 1:

// Input: l = 5, r = 7

// Output: 3

// Explanation:

// There are no special numbers in the range [5, 7].

// Example 2:

// Input: l = 4, r = 16

// Output: 11

// Explanation:

// The special numbers in the range [4, 16] are 4 and 9.

 

// Constraints:

// 1 <= l <= r <= 109
