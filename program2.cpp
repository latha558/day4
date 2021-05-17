

class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        // code here
        int k=2; 
       while(n !=0)
       {   
            int new_num = n >> k-1 ; 
             n=n&(new_num & 0);
             k+=2;
           
       }// 
    }
};
