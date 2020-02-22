#include <iostream>
using namespace std;
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
void reversal_arr(int arr[], int a,int b){
  int arr_size=sizeof(arr)/sizeof(arr[0]);
  //for (int i=0;i<arr_size;i++)
    //arr[i]=arr[n-i];
  //}

  for (int i=0;i<b-a;i++){
    arr[b-i]=arr[a+i];

  }
}

void LastProduct(int arr[], int d,int n){
  reversal_arr(arr,d-1,n-1);
  
}

int main(){
  return 0;
}
