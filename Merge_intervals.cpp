


// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
//     int n = arr.size(); // size of the array

//     //sort the given intervals:
//     sort(arr.begin(), arr.end());
//     vector<vector<int>> ans;

//     for (int i = 0; i < n; i++) { // select an interval:
//         int start = arr[i][0];
//         int end = arr[i][1];

//         //Skip all the merged intervals:
//         if (!ans.empty() && end <= ans.back()[1]) {
//             continue;
//         }

//         //check the rest of the intervals:
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j][0] <= end) {
//                 end = max(end, arr[j][1]);
//             }
//             else {
//                 break;
//             }
//         }
//         ans.push_back({start, end});
//     }
//     return ans;
// }

// int main()
// {
//     vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
//     vector<vector<int>> ans = mergeOverlappingIntervals(arr);
//     cout << "The merged intervals are: " << "\n";
//     for (auto it : ans) {
//         cout << "[" << it[0] << ", " << it[1] << "] ";
//     }
//     cout << endl;
//     return 0;
// }


<<<<<<<<<<<<<<<<<<<<<<<<OPTIMIZED APPROACH>>>>>>>>>>>>>>>>>>>>>

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            
            if(ans.empty()|| intervals[i][0]>ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);

            }
        }
        return ans;
    }
};
Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.



