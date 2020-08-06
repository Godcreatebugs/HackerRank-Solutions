#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int Unique_char_index(string s){
  unordered_map <char,int> hash;
  int n =s.length();
  //hashmap solution O(1)
  // for(int i=0;i<n;i++){
  //   char c =s[i] ;
  //   if(hash.find(c) != hash.end()){
  //        hash[c] += 1;
  //   }
  //   else hash[c]=1;
  // }
  // // for(int i=0;i<n;i++){
  // //   char c=s[i];
  // //   if(hash[c]==1){
  // //     return i;
  // //   }
  // //   return -1;
  // // // }
  // for(int i=0;i<hash.size();i++){
  //
  //   cout<<hash[i]<<" "<<endl;
  // }
  for(int i=0;i<n;i++){
    hash[s[i]]++;
  }
  for(int i=0;i<n;i++){
   if(hash[s[i]]==1) return i;
   }
      return -1;
}

int main(){
   string s = "piyush";
   cout<<Unique_char_index(s)<<endl;
}
