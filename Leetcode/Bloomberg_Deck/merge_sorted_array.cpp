#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//avoiding & sign has helped to get rid of seg fault
void merge(vector<int> &A, int m, vector<int> &B, int n) {
        //Method 1: The naive approach is to merge 2 list and sort it and return that list.
        //O(m+n)log(m+n) is time complexity and O(1) is space complecity.
        // The answer comes to be 123 and the problem lies with pass by value which generates a copy not origional object
        //still does not work
       //  for(int i=m,j=0;j<n;j++){
       //      // if(nums1[i]==0) nums1[i] =nums2[j];
       //      // if(nums2[j]==0) j++;
       //      nums1[i++] = nums2[j];
       //  }
       //
       // sort(nums1.begin(),nums1.end());



//Method 2: 2 pointers Method it is not working + edge cases becomes trickier
// int i,j =0;// i for nums1 and j for nums2
// int k =0; //k for result pointer
// vector<int> q(m+n,0);
// vector<int> *p=&q;
// for(k;k<m;k++){
//   if (nums1[i]>nums2[j]){
//     (*p)[k]=nums2[j];
//     j++;
//   }
//   if(nums1[i]<=nums2[j]){
//     (*p)[k] =nums1[i];
//     i++;
//   }
// }

//Method 3: 3 pointers method
// The idea is to go from reverse order untill you are exhausted in other 2 vectors
int i=m-1, j=m+n-1, k=n-1;

while(i >= 0 && k >= 0)
{
    if(A[i] <= B[k])
        A[j--] = B[k--];
    else
        A[j--] = A[i--];
}
while(k >= 0){
    A[j--] = B[k--];
}

for(int& i:A){
      cout<<i<<" ";
      }
}



int main(){
  //0,0,0 at last added as cushion to add to expand vector m is 3
  std::vector<int> v1{1,2,3,0,0,0};
  std::vector<int> v2{2,5,6};
  merge(v1,3,v2,3);
}
