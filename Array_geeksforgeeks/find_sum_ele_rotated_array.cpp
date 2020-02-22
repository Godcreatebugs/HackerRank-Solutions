#include <iostream>
using namespace std;
//1st way
// So, approach is fairly simple like the sorted array we assign l and
// r and then begin
// Here we have to find where is l and r in the array.
// The way to do so is finding a point where next element is smaller.
// For example 15 11 5 9 10 , we see 11 and 5 as pivot points and
// then we do the same procedure with a little change

//2nd way
// A second approach can be sorting array using rotate_operation once doing
// number of times to sort or use builtin sort to implement previous function.


void SumElements(int arr[],int n,int sum){
  int i;
  for (i=0;i<n-1;i++){
    if (arr[i]>arr[i+1]){
      break;
    }
  }
  int l,r;
  r=i;
  l=i+1;
  while(l!=r){
    if (arr[l]+arr[r]==sum){
      cout<<arr[l]<<" "<<arr[r]<<"\n";
      return;
    }
    else if(arr[l]+arr[r]<sum){
    // I call this sanity check
    // dividing by number of elements keep you tracked.
      l=(l+1)%n;
    }
    else{
      //mind you even n-(r-1) wou;d have worked.
      // the problem is -1/5 is undefined it does not give anything
      r=(n+(r-1))%n;
    }
  }
cout<<"No 2 elements make this sum"<<endl;
}
int main(){
  int arr[5]={13,15,5,7,9};
  SumElements(arr,5,12);
return 0;
}
