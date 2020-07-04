#include <bits/stdc++.h>
using namespace std;

int MaxArea(vector<int> &height){
 int n  =height.size();
int max_area = INT8_MIN; //update it with max
//Setting up limits at the beginning
int i = 0;
int j = n-1;
while (i<j){
    int min_height = min(height[i],height[j]);//constraint
    int max_area = max(max_area, min_height * (j-i));// only update if max_area has bumped
    // concentrating one one bar which is higher and move other bar accordingly
    // We are updating it just when we need it. Max_area is updated when we need it.
    if (height[i]>height[j])
        j--;
    else
        i++;
}
return max_area;
    }


int main(){
  std::vector<int> height {1,8,6,2,5,4,8,3,7};
  cout<<MaxArea(height);
}
