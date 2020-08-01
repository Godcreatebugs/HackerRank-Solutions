#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector <int> TwoSum(vector <int> arr,int target){
  vector <int> res;
  int n = arr.size();
  unordered_map <int,int> hash;

/* BRUTE FORCE SOLUTION
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if (arr[i]+arr[j]==target){
        res = {arr[i],arr[j]};
      }
    }
  }
  return res;

*/

//HASHMAP SOLUTION O(N) TIME COMPLEXITY
//decelaration of hash_table
for(int i=0;i<n;i++){
  int num_find = target - arr[i];
  if (hash.find(num_find) != hash.end()){
    //you need index returned and not the elements
       // res ={arr[i],num_find};
       res ={i,hash[num_find]}; 
  }
  hash[arr[i]]=i;
}
return res;
}

int main(){
  vector <int> arr {2,11,5,7};
  vector <int> res = TwoSum(arr,9);
  for(int i=0;i<2;i++){
    cout<<res[i]<<" ";
  }
  return 0;
}
