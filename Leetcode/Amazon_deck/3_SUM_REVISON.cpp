#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <vector<int>> ThreeSum(vector <int> &nums){
   vector <vector<int>> res;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    //BF solution - This soln works , time limit exceeds just sort ele at the end and delete duplicates
    //All the other methods to skip previous same elements failed. 
    for(int i=0;(i<n-2 && nums[i]<=0);i++){
      for(int j=i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
          if (nums[i]+nums[j]+nums[k]==0) res.push_back({nums[i],nums[j],nums[k]});
        }
      }
    }
  sort( res.begin(), res.end() );
  res.erase( unique( res.begin(), res.end() ), res.end() );
  return res;
}

int main(){
vector<int> nums{-1, 0, 1, 2, -1, -4};
vector <vector<int>> res = ThreeSum(nums);
 for(vector<int> i:res){
   for(int j:i){
     cout<<j<<" ";
   }
   cout<<endl;
 }
}
