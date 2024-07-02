


void rotate(int arr[], int n)
{
  vector<int>ans(n);
 int m= ans.size();
  ans[0]=arr[n-1];
  for(int i=1;i<n;i++){
      ans[i]=arr[i-1];
  }
  for(int i=0;i<n;i++){
      arr[i]=ans[i];
  }
  
}