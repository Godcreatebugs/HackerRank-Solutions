#include <iostream>
using namespace std;

int MakeSum(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
return sum;
}

 int Max_Product(int arr[],int n){
   int original_sum=MakeSum(arr,n);
   int current_sum = original_sum;
   int max_ele_product;
   for(int j=1;j<n;j++){
      int update_sum;
      //int max_ele_product;
      update_sum = current_sum +original_sum -(n-j)*arr[n-j];
      if (update_sum>current_sum){
      max_ele_product=update_sum;
      }
      current_sum=update_sum;

   }
return max_ele_product;

 }

 int main(){
   int arr[]={5,4,3,2,1};
    int max_product=Max_Product(arr,5);
    cout<<max_product;
   return 0;
 }
