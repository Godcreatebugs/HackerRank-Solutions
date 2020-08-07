#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
// #include <stdio.h>
using namespace std;

bool isAnagram(string s, string t){
  //o(nlogn) soln and that dominates time complexity
  //O(1) -space complexity
  //does not work on leetcode ide
  // if (s.size()!=t.size()) return false;
  //       char str1[s.size()];
  //       strcpy(str1,s.c_str());
  //       char str2[t.size()];
  //       strcpy(str2,t.c_str());
  //       sort(str1,str1+sizeof(str1));
  //       sort(str2,str2+sizeof(str2));
  //       // for(char c:str1){
  //       //   cout<<c<<" "<<endl;
  //       // }
  //       // for(char c:str2){
  //       //   cout<<c<<" "<<endl;
  //       // }
  //       if(strcmp(str1,str2)!=0) return false;
  //
  //       return true;

//Approach 2: make array of int of alphabet and check wether and increment of one pointer first string and decrement with second
//and should reach to 0. O(1) solution and O(26)==O(1) space complexity.
if(s.size()!=t.size()) return false;
//integer array may contain garbadge values hence use vector and initialize with 0s.
//int alpha[26];
// vector<int> alpha(26,0);
// for(int i=0;i<s.size();i++){
//    alpha[s[i]-'a']++;
//    alpha[t[i]-'a']--;
// }
// for(int j=0;j<26;j++){
//  if(alpha[j]!=0) return false;
// }
// return true;
// }

//Method 3 : detects early failure case in 2nd for loop for false longer anagrams
vector<int> alpha(26,0);
  for(int i=0;i<s.size();i++){
      alpha[s[i]-'a']++;
  }
  for(int i=0;i<s.size();i++){
      alpha[t[i]-'a']--;
      //for a very long anangram you can have early check which makes program faster
      if(alpha[t[i]]<0)return false;
  }
  for(int i=0;i<26;i++){
      if(alpha[s[i]] !=0) return false;
  }
  return true;
  }
int main(){
cout<<isAnagram("anagram","apngram");
}
