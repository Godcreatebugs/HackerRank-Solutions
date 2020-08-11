#include <iostream>
#include <vector>
using namespace std;
//apparatntly reversing only happens with array
//tried to do it with vector but it does not work maybe becaause of internal working of a vector
void Reverse(int v[],int i,int j){
  //swapping 2 element at extremes
  int temp = v[i];
  v[i] =v[j];
  v[j] =temp;
}
void ReverseArr(int v[]){
  int i=0, j =4;
  while(i<j){
    Reverse(v,i,j);
    i++;j--;
  }
}

int main(){
  int v[5]{1,2,3,4,5};
  ReverseArr(v);
  for(int i:v){
    cout<<i<<" ";
  }
}
