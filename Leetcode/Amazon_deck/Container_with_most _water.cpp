#include <bits/stdc++.h>
using namespace std;

int MaxArea(vector<int> &height){

  /* METHOD 1 : Brute Force Solution iterate using 2 for loops untill you find best area. and time limit exceed.O(n^2)
  int max_area= 0;
  int n = height.size();
  for (int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
          int min_height  = min(height[i],height[j]);
          if (min_height*(j-i)>max_area) max_area = min_height * (j-i);
      }
  }
          return max_area;
      }
      };
  */

  //METHOD 2 : This one is a little tricky, and you focus on the bigger bar and limiting factor which is min of height of 2 bars.
  // And we update only we execeed previous max, IDK why my precious code didnt work it was the same.
  int max = INT8_MIN;
  int min=0;
  int i =0;
  int j = height.size()-1;
  while(i<j){
    min = std::min(height[i],height[j]);
    max = std::max(max,(j-i)*min);
    if (height[i]>height[j]){
      j--;
    }
    else{
      i++;
    }
  }
  return max;

      }
    


int main(){
  std::vector<int> height {1,8,6,2,5,4,8,3,7};
  cout<<MaxArea(height);
}
