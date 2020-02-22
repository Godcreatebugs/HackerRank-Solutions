#include <iostream>
#include <algorithm>
#include<array>
using namespace std;

// sort for c-style array
// remember that even with the [] we are passing a pointer.
void sort_arr(int arr[], int size){
  sort(arr,arr+size);
  for (int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
// for standard array sort is a little different
}
/*
void sort_arr_std (array <int,int size> arr) {
  sort(arr.begin(),arr.end());
  for (int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }

}
*/

//make a function to get the sum -elements
// if 1 2 3 4 5 and sum is 8 then return 3 and 5


void SumElements(int arr[],int n,int sum){
  int l,r;
  l=0;
  r=n-1;
 //you dont want to exceed mid way though the array that will
 //be like saying a+b and b+a are different
  while (l<r){
    if (arr[l]+arr[r==sum]){
      cout<<arr[l]<<" "<<arr[r]<<"\n";
    }
    else if(arr[l]+arr[r]<sum){
      l++;
      //SumElements(int arr[],int sum
      // do not need a recursive call
    }
    else{
      r--;
    }
  }
cout<<"No potential candiadates found"<<endl;

}
int main(){
  //array <int,5> arr ={1,2,3,4,5};
   int arr[5]={1,2,3,5,4};
  sort_arr(arr,5);
  SumElements(arr,5,8);
  return 0;
}
