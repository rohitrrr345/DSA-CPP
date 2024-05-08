string isSubset(int a1[], int a2[], int n, int m) {
     int maxi=max(n,m);
    string ans="";
    sort(a1,a1+n);
 sort(a2,a2+m);

    int count=0;
    int i=0;
    int j=0;
    while(i<n &&j<m){
        if(a1[i]==a2[j]){
            i++;
            j++;
            count++;
        }
         if(a1[i]<a2[j]){
            i++;
            
        }
         if(a1[i]>a2[j]){
            j++;
    }
    }
    if(count==m){
        ans="Yes";
        return ans;
    }
    else{
        ans="No";
        return ans;
    }
}