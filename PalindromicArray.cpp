class Solution {
    
public:
 bool reverse(int*a,int n, int value){
       string stri = to_string(value);
       int z=stri.size();
      int start=0;
      int end=z-1;
      while(start<=end){
          if(stri[start]==stri[end]){
              start++;
              end--;
          }
          else{
              return 0;
          
      }
      
 }
 return 1;
 
 }
    int PalinArray(int a[], int n)
    {
        int value=0;
        int count=0;
         for(int i=0;i<n;i++) {
             value=a[i];
             if(reverse(a,n,value)){
                 count++;
             }
         }
         if(count==n){
             return 1;
         }
         else{
             return 0;
         }
    }
    ///
     int checkPalindrome(int a){
        int rev=0;
        int digit;
        int num=a;
        while(a!=0){
            digit=a%10;
            rev=(rev*10)+digit;
            a=a/10;
        }
        if(num==rev){
            return 1;
        }
        else{
            return 0;
        }
    }
    int PalinArray(int a[], int n)
    {
        int i=0;
        while(i<n){
            if(checkPalindrome(a[i])){
                i++;
            }
            else{
                return 0;
            }
        }
        return 1;
    }