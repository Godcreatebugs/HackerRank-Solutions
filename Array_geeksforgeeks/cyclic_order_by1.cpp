#include<iostream>
using namespace std;

/*
This is a classic example of an question where goingforward with indices is
creating trouble as when you do substitute the number in next index. That
element is propogated into next index.
For example 5 6 7 8 9;
when getting 5 to 1st position and then tranmsferring 6 to 2nd index is impossible
as already the element as index 1 has become 5.
So we have to go in the decrement order where getting last index is
useless as its going to be substituted soon.
*/
void cyclic_1(int arr[],int size){
  //int n=sizeof(arr)/sizeof(arr[0]);
  int temp=arr[size-1], i;
  for(i=size-1;i>0;--i){
    arr[i]=arr[i-1];
  }
  arr[0]=temp;

}

int main(){
  int test_arr[5]={1,2,3,4,5};
  cyclic_1(test_arr,5);
  for(int j=0;j<5;++j){
    cout<<test_arr[j]<<" ";go
  }
  return 0;
}
