class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /*Piyush Bhuva -9/7/2020 O(n)
        METHOD 1: Method is O(n) in space and time complecity.You need to make 3 array left right and one to store result. And traverse through once and due to arrays it will give O(n) space complexity. Cuz stack is always full with O(n) depending on where you are.
        The idea is missing element will be given with multiplication of elements.
        For an instance if you take second last element you already have 2 elements multiplied together and rest of answer will be contributed via right elements which have kept multilpying.

        int n = nums.size();
        vector<int> left(n), right(n),res(n);
        right[n-1]=1;
        left[0] =1;

        [1,2,3,4,5]
        [1,0,0,0,0]
        [0,0,0,0,1]
        res- [ *,*,*,*,4*1* 3 *2 *1] 3 2 1 contributed from right and otherwise left

        for(int i=1;i<n;i++){
            left[i] = left[i-1] * nums[i-1];
        }

        for(int j=n-2;j>=0;j--){
            right[j] = right[j+1] * nums[j+1];
        }
        // for(int k=0;k<n;k++){
        //     res[k] = left[k] * right[k];
        // } saves time for computattion and extra space as well
        for (int i=0;i<n;i++){
            right[i] = right[i] * left[i];
        }
        return right;
        */

        /*
        Method 2: Again we can reduce space complecity if we can use one variable to store right array and it will be         O(1).
        */
        int n =nums.size();
        vector<int> res(n);
        res[0]=1;
        for(int i=1;i<n;i++){
            res[i] = res[i-1] * nums[i-1];
        }
        int R=1;
        for(int j=n-1;j>=0;j--){
            res[j] =res[j] * R;
            R *= nums[j];
        }
        return res;
    }
}; 
