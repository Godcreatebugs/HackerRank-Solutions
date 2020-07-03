class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        /*
        Of course one way is BF solution where we check all the possible combination of 3 elements,
        we use one variable which keep estimate of the best sum yet and this will O(n^3) solution.
        - But we can use 2 pointers after soritng vector and just check how we can go from the sum with current elements
        */
    int diff = INT_MAX; //INT_MAX cuz we want to minimize it
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for (int i =0;i<n-2;i++){

            //this condition will hold true cuz we want to skip repetition of elements.
            int low = i+1;
            int high= n-1;

            //Standard 2 pointers method
            while(low<high){
                int sum = nums[i] + nums[low] + nums[high];
                //if found match end function
                if (abs(target-sum) == 0 ) return sum;
                //most gazab line of whole program, it updates itself only seeing target-sum and diff's absolute value
                // and if that then we go to update diff as diff is something we want to minimize.
                if (abs(target-sum)<abs(diff)){
                    diff = target-sum;
                }
               //condition to check wether target>sum we need smaller number hence high--
               if (target>sum) high--;
               else low++;
            }
        }

     // Can not return sum directly which is actually the sum of last elements
        //The last updated elements are diff so based on that sum = target-diff (We are updating diff and not sum)
    return target-diff;


    }

};
