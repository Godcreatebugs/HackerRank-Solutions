class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
    /*Brute Force Solution:
    One pointer at the begining and the other one pointing to next element and iterate untill you find a match

     vector <int> res;
     int num_size = nums.size();
     for(int i=0;i<num_size;i++){
         for(int j=i+1;j<num_size;j++){
             if (nums[i]+ nums[j] ==target){
                 res= {i,j};
                 return res;
             }
         }
     }
        return res;
     }
     };
     */

         /*
         Author - Piyush Bhuva, 7/2/20,C++ ,O(1) solution
         -Better way to navigate and look for complement is dictionary or Map as it gives O(1) lookpu time in elements.
         - You can make a map first and then navigate (called 2 pass hasmap)
         - Or you can do it along(One Pass Hashtable)
         Runtime: 16 ms, faster than 77.38% of C++ online submissions for Two Sum.
        Memory Usage: 10.2 MB, less than 30.65% of C++ online submissions for Two Sum.
         */
     vector <int> res;
     //int num_size = nums.size();
     unordered_map <int,int> has; //key is element and value is index
     for (int i=0;i<nums.size();i++){
         int num_find = target - nums[i]; // you will always find key if not at beginning then at the end
         //hasmap works on iterator and has.end shows end to the list
         if (has.find(num_find) != has.end()){
             res = {has[num_find],i};
             return res;
         }
         has[nums[i]] = i;
     }
      return res;
     }

     };
