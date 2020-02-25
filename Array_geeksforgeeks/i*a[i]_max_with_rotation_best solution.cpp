#include <iostream>
#include<array>
using namespace std;
// So this problem is more about the mathematical progression and
// reducing the time complecity of the problem to O(n)
// and for that we have to use a formula like given below then run a for loop and
// compare the values.
int MakeSum(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=i*arr[i];
  }
return sum;
}
int accumulate(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
return sum;
}
 int Max_Product(int arr[],int n){
   int arr_j_1=MakeSum(arr,n);
   //int arr_j_1 = arr_0;
   int sum_array=accumulate(arr,n);
   int max_ele_product;
   for(int j=1;j<n;j++){
      int arr_j;
      //int max_ele_product;
      arr_j = arr_j_1 + sum_array -(n)*arr[n-j];
      cout<<arr_j<<" ";
      if (arr_j>arr_j_1){
      max_ele_product=arr_j;
      cout<<"\n";
      cout<<max_ele_product;
      }
      arr_j_1=arr_j;

   }
  return max_ele_product;

 }

 int main(){
   int arr[]={1,2,3,4,5};
    int max_product=Max_Product(arr,5);
    //int sum=MakeSum(arr,5);
    cout<<max_product;

   return 0;
 }
