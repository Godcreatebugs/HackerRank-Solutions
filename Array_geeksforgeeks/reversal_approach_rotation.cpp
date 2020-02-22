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
// this is very important to understand that C++ does not allow to make a
// function that returns an array
int *make_A(int *arr[],int d){

  int *A_arr[d];

  for (int i=0;i<d;i++){
    A_arr[i]=arr[i];
  }
  return *A_arr;
}
// make B_arr
int *make_B (int *arr[],int d,int n){
  int *B_arr[n-d];
  for(int i=0;i<n-d;i++){
      B_arr[i]=arr[(n-d-1)+i];
  }
  return *B_arr;
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
//*arr[]- this is not the way to point to first elements
//*arr - as this will point to first element
int *pointer_a=make_A(*arr[],d);
int *pointer_b=make_B(*arr[],d,n);
reversal_arr(A_arr[d]);
reversal_arr(B_arr[n-d]);
int resultant_arr[n];
for(int i=0;i<n;i++){
  while (d!=0){
    resultant_arr[i]=A_arr[i];
    d--;
  }
  while (n-d!=0){
    resultant_arr[i]=B_arr[i];
    (n-d)--;
  }
}
reversal_arr(resultant_arr);
for (int i=0;i<n;i++){
  cout<<resultant_arr[i]<<" ";
}

  return 0;
}
