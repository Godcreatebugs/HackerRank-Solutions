class Solution { //Piyush Bhuva - 10/7/20
public:
    int missingNumber(vector<int>& nums) {
        /*
        Method 1: So, given that I have an vector from 0 to n, check edge cases first after sorting it and
        Then traverse the list to check 2 consective elements difference.
        Time complexity O(nlog n) dominated by sorting algorithm and and O(1) is space complexity.


        int n = nums.size();
        sort(nums.begin(),nums.end());
        //edge cases
        if(nums[0]!=0) return 0;
        if(nums[n-1] != n-1) return n-1;

        //traversing to compare 2 consecutive elements
        for(int i=1;i<n;i++){
            int expected_num  = nums[i-1] + 1;
            if (nums[i] != expected_num) return expected_num;
        }
        //if none of the cases above and btw -1 is never part of array
        return -1;
        //THE ANSWER IS WRONG , [0] SHOULD GIVE -1 WHICH MY CODE IS GIVING as we are missing nothing.
        */


        /*
        Method 2: We can harness power of hasmap in c++ which offer linear time search for each element using key-             value pair. And we can compare current traversing element to the element+1  and if we havent find that element         we have got our match.

        int n =nums.size();
        unordered_map <int,int> lookup_hash;
        for (int i=0;i<n;i++){
            lookup_hash[i] = nums[i]; //fulfilled elements in hashmap
        }
        for (int i=0;i<n;i++){
            if (lookup_hash.find(i) == lookup.end()){
                return
            }
        }
        */
        /*
        METHOD 4: This is badass way to do this question you use the sum of numbers formula and do the sum using for           loop of all the number then the differnce is the missing number and remember what is the sum_sq-sum is 0 then         your array is complete.
        */
        int n = nums.size();
        int gauss_sum = n* (n+1) / 2 ;
        int sum{0};
        for (int i=0;i<n;i++){
            sum += nums[i];
        }
        //what is difference is 0 you can not say that 0 is missing
        return gauss_sum - sum;
        }
};
