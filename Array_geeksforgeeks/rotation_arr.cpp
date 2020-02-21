#include <iostream>
using namespace std;
void result_arr_one_rotation (int arr [], int n){
  // int one_rotate_arr[n];
  int p=arr[0];
   for (int i=0;i<n-1;++i){
    arr[i]=arr[i+1];
  }
  arr[n]=p;
  //return arr;
}


int main(){
//n stands for total number of elements in array and d stands for number of rotation
  int n,d;
  cin>>n>>d;
  int arr[n];
  //to take elements of array
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  //int rotated_arr[n];
  for (int i=0;i<d;i++){
      result_arr_one_rotation(arr,n);
      //cout<<arr[i]<<" ";
  }
  for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
