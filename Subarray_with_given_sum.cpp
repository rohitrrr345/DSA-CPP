   bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int>s;
        int pre_sum=0;//genre intersects meeting goun
        for(int i=0;i<n;i++){
            pre_sum += arr[i];
            
            if(pre_sum == 0)
                return true;
            if(s.find(pre_sum)!=s.end()){
                 return true;
            }
            s.insert(pre_sum);
        }
        return false;
    }
       bool subArrayExists(int arr[], int n)
    {  
        
        unordered_set<int>s;
        int pre_sum=0;
        for(int i=0;i<n;i++){
            pre_sum += arr[i];
            
            if(pre_sum == 0)
                return true;
            if(s.find(pre_sum)!=s.end())
                return true;
            
            s.insert(pre_sum);
        }
        return false;    
    }
     bool subArrayExists(int arr[], int n) 
    
        int count=0;
          unordered_map<int,int>mpp;
     int preSum = 0;    

     mpp[0] = 1;
     for (int i = 0; i < n; i++) {
         
         preSum += arr[i];

         
         int remove = preSum -0;

         count += mpp[remove];

                  
        mpp[preSum];
     if(count){
      return true;
     }
 }
 return false;
 