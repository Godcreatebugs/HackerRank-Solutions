#include <iostream>
#include <vector>
using namespace std;

int MaxContainer(vector <int> &height){
  int res{0};
  int n = height.size();
  /*BF Solution
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      //takes care of arr with only 2 element
      int sum = (j-i) * min(height[i],height[j]);
      if (sum>res) res = sum;
    }
  }
  */

  //2 Pointers Method
  int i = 0;
  int j = n-1;
  //update res only when you get better option


  while(i<j){
    //I had made a mistake and put prdoct and res outside while which is mistake cuz you want to update them inside while.
    int product = (j-i) * min(height[j],height[i]);
    res = max(product,res);
    if (height[i]>=height[j]){
      j--;
    }
    i++;
  }
  return res;
}

int main(){
  std::vector<int> heights {1,8,6,2,5,4,8,3,7};
  std::cout << "And the res is: " <<MaxContainer(heights) << '\n';
}
