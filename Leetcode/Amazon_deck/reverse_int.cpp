class Solution {
public:
    int reverse(int x) {
      /*Method 1 : we can convert it to string but thats hard way to it.
      Another and easy way is to use modulo and pop to iterate and store elements
      Another method is to use stack but will do it later and may result in O(n) complaxity - bad one
      Piyush Bhuva - 7/5/20 Complexity is O(log(n)) number shrinks in 10s log scale
      */

      int res=0;

     while (x!=0) {
         int pop = x%10;
         x /=10; //x has to shrink after modulo op

         //The below is the only reason why this question is good to attempt

         /*The only good thing about this problem is bound check
         Check for res at every single updation of res is necessary wether it goes for overlow
         There are 2 possible option
         Number goes more than INT_MAX or lower than INT_MIN
         Or.... Exactly INT_MAX or INT_MIN and to make sure we add robustness using remainder (&& condition)
         The check can happen like
         - rev*10>INT_MAX but that will exceed 32 bits memory and hence divison is a better option
         - Now, what if the division come exactly like INT_MAX there are still
         6 numbers that can fit that special requirenments right. For an instance,
         2147483645 is a possible combination and it is legal so we have to check for remainder as well
         */
         if ((res==INT_MAX/10 && pop>7) || res> INT_MAX/10) return 0;
         if ( (res== INT_MIN/10 && pop<-8) || res<INT_MIN/10 ) return 0;

         res = res*10 + pop; // pop will increase in power of  10 and will fill res in reverse as x
         }
      return res;
    }
};
