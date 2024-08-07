//   int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) {//generally
        int sum = 0;
        for (int j = i; j < n; j++) {
            // current subarray = arr[i.....j]

            //add the current element arr[j]
            // to the sum i.e. sum of arr[i...j-1]
            sum += arr[j];

        if(sum==0){
            return true;
        }
        }
    }
    return false; 

//     return maxi;
// class Solution{
//     public:
//     // arr: input array
//     // n: size of array
//     //Function to find the sum of contiguous subarray with maximum sum.
//     long long maxSubarraySum(int arr[], int n){
        
//       long long  int maxi=arr[0];
//         long long int sum=0;
//         for(int i=0;i<n;i++){
//             sum=sum+arr[i];
           
//             maxi=max(maxi,sum);
//              if(sum<0){
//                 sum=0;
//             }
//         }
//         return maxi;
        
//     }
// };