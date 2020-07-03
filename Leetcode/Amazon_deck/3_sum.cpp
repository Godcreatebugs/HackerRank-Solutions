#include <bits/stdc++.h>
using namespace std;

  vector<vector<int>> threeSum(vector<int>& nums) {
          /*
          First Approach is obviously brute force and seeing that O(n^2) is a reasonable time complexity we can afford to sort an array.
          Brute force on this is complicated and not viable in C++ where its hard to avod duplicate elements even after sorting it.
          So, we can make 2 pointers method for each single element.
          - And to make approach even better we can omit elements after 0 as they will never leads to sum 0.
          */
          vector <vector<int>> res;
          sort(nums.begin(),nums.end());
          int n = nums.size();
          for (int i=0;i<n-2 && nums[i]<=0;i++){
              if (i==0 || nums[i]!=nums[i-1]){
              int low  = i+1;
              int high = n-1;
              while(low<high){
                  int sum = nums[i]+ nums[low] + nums[high];
                  //if sum is less than 0 and we have not the same elements (necessary that we ahve moved)
                  if (sum<0 || (low>i+1 && nums[low]==nums[low-1])){
                      low++;
                  }
                  //or sum is greater than 0 and we have moved than delete duplicates
                  else if(sum>0 || (high<n-1 && nums[high] == nums[high+1])){
                      high--;
                  }
                  //push to res and update high and low
                  else{
                      vector<int> res_int = {nums[i],nums[low],nums[high]};
                      res.push_back(res_int);
                      //This lines are addeded to not keep going we have to update high and lowc
                      low++;
                      high--;
                  }
              }

          }
          }
           return res;
    }

    int main(){
      vector <int> nums {-1,0,1,2,-1,-4};
      vector<vector<int>> res = threeSum(nums);
      for(unsigned int i = 0; i<res.size();i++){
        for(unsigned int j=0; j<res[0].size();j++){
          cout<<res[i][j]<<" ";
        }
        cout<<"\n";
      }
    }
