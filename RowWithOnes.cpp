int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   int maxi=0;
	   int index=0;
	   
	   for(int i=0;i<n;i++){
	       int count=0;
	       for(int j=0;j<m;j++){
	           if(arr[i][j]==1){
	               count++;
	               
	           }
	       }
	       if(count>maxi){
	           maxi=count;
	           index=i;
	           
	           
	       }
	   }
	   if(maxi==0){
	       return -1;
	   }
	   return index;
	   
	}
