#include <iostream>
#include <string>
#include <vector>
using namespace std;

int compress(vector<char> &chars){
// question suggest that you have to find a method ["a","a","b","b","c","c","c"] characters are counted.
// Constraint is allocation of another array is prohibited so do it in O(1). read and write must happen in same array

int i =0;//reading index
int j =0;//output index
while(i<chars.size()){
  char c = chars[i];
  int count=1; //how many times c present in chars
  //this below line compares succesor and if same element increase count
  while(++i<chars.size() && chars[i]==c){
    ++count;
  }
  chars[j++]=c; //count is written to an array
  if(count>1){
  for(char&ch :to_string(count)){
    //cuz vect has to have same type of element and hence int to char

    chars[j++]=ch;
  }
 }
}
 for(char& c:chars){
   cout<<c<<" ";
 }
return j;
}

int main(){
// vector<char> chars {'a','a','b','b','c','c','c'};
vector<char> chars {'a','b','c','c'};
cout<<compress(chars)<<endl;
}
