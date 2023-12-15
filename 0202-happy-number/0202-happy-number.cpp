class Solution {
public:
    bool isHappy(int n) {
        int m = n;
        
      if(n>5)
       {  int sum = 0;
          while(n>0)
           
           {
               sum+=pow(n%10, 2);
               n/=10;
           }
        return isHappy(sum);
        }
        return n==1;
    }
};