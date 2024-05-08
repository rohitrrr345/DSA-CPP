 bool find3Numbers(int A[], int n, int X)
    {
       sort(A,A+n);
       int i=0;
       while(i<n){
           int j=i+1;
           int r=n-1;
           while(j<r){
               if((A[i]+A[j]+A[r])==X){
                  return 1; 
               }
               else if((A[i]+A[j]+A[r])<X){
                   j++;
               }
               else{
                   r--;
               }
           }
           i++;
       }
       return 0;
    }
    //using map

    class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        for (int i = 0; i < n - 2; i++) 
        {
    
            // Find pair in subarray A[i+1..n-1]
            // with sum equal to sum - A[i]
            unordered_set<int> s;
            int curr_sum = X - A[i];
            for (int j = i + 1; j < n; j++) 
            {
                if (s.find(curr_sum - A[j]) != s.end()) 
                {
                    return true;
                }
                s.insert(A[j]);
            }
        }
    
        // If we reach here, then no triplet was found
        return false;
    }

};