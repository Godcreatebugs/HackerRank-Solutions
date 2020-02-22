/*
This is the approach in which we take 2 arrayes and reverse each one of them
joins them and reverse the whole array.
Let A[] be the array from 0 to d-1 index and reverse it.(get A-)
let B[] be the array from d to n-1 index and reverse it.(get B-)
now, joins it and reverse the whole array to get an answer
*/

/* 3 functions needed
1. get 0 to d-1
2. get d to n-1
3. reverse the arraye
*/
#include<iostream>
using namespace std;
//make A_arr
int make_A[](int arr[],int d){

  int A_arr[d];

  for (int i=0;i<d;i++){
    A_arr[i]=arr[i];
  }
  return A_arr[d];
}
// make B_arr
int make_B[](int arr[],int d,int n){
  int B_arr[n-d];
  for(int i=0;i<n-d;i++){
    B_arr[i]=arr[(n-d-1)+i];
  }
  return B_arr;
}
//reversal_arr
void reversal_arr(int arr[],int n){
  for (int i=0;i<n;++i){
    arr[i]=arr[n-i];
  }
}
int main(){
  int n,d;
  cin>>n>>d;
  int arr[n];
  //to take elements of array
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
int A_arr[d]= make_A(arr[],d);
int B_arr[n-d]= make_A(arr[],d,n);
reversal_arr(A_arr[d]);
reversal_arr(B_arr[n-d]);
int resultant_arr[n];
for(int i=0;i<n;i++){
  
}



  return 0;
}
