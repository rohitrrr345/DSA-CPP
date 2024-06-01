class Solution{
  public:
    int minJumps(int arr[], int n){
       int range=arr[0];
       int ans=0;
       int i=0;
       if(n==1){
           return 0;
       }
       while(range<n-1){
           int temp=range;
           while(i<n && i<=range){
               temp=max(temp,arr[i]+i);
               i++;
           }
           if(temp==range && i<n){
               return -1;
           }
           range=temp;
           ans++;
       }
       return ans+1;//renting
    }
};
