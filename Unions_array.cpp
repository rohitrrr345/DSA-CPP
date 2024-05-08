// class Solution{
//     public:
//     //Function to return the count of number of elements in union of two arrays.
//     int doUnion(int a[], int n, int b[], int m)  {

//       vector<int>ans;
//       for(int i=0;i<n;i++){
//           ans.push_back(a[i]);
//       }
//        for(int i=0;i<m;i++){
//           ans.push_back(b[i]);
//       }
//       int count=ans.size();
//       sort(ans.begin(),ans.end());
//       for(int i=1;i<ans.size();i++){
//           if(ans[i-1]==ans[i]){
//               count--;
//           }
//       }
//       return count;
    
//     }
