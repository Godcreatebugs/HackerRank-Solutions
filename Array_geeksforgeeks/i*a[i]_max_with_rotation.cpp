#include <iostream>
using namespace std;


// The question is unsorted array is given and and you can rotate number of times
// and you want to maximize the sum of i*a[i] and and the obvious solution is
// brute force and we get each pair and compare but that is O(n**2) solution and that
// is a bad solution

//My approach
//  Make function to rotate by
// Store current Array sum.
// Another intialisation of variable for the sum
// A function to compare sum and current Array sum
// and update based on it to greatest and return that.

int sum_Array(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum +=arr[i]*i;
  }
  return sum;
}

void Rotate_one(int arr[],int n){
  int temp=arr[n-1];
  for(int i=n-1;i>0;i--){
    arr[i]=arr[i-1];
  }
  arr[0]=temp;
  // for(int i=0;i<n;i++){
  //   cout<<arr[i]<<" ";
  //}
}
int max_sum(int arr[],int n){
  int current_sum;
  int max_sum=0;
  for(int i=0;i<n;i++){
    current_sum=sum_Array(arr,n );
    Rotate_one(arr,n);
    if (current_sum>max_sum){
      max_sum=current_sum;
    }
  }
  return max_sum;
}
int main(){
  int arr[]={1,2,3,4,5};
  // int sum =sum_Array(arr,5);
  // cout<<sum<<"\n";
  // Rotate_one(arr,5);
  int max_sum_answer=max_sum(arr,5);
  cout<<max_sum_answer;
  return 0;
}
