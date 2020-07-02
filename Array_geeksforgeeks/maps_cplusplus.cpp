#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  //integer taken by the user
  int n;
  cin>>n;
  // a map made and for loop to set up a name and number dixtionary
  map <string,string> dict;
  for(int i=0;i<n;i++){
      string name,number;
      cin>>name>>number;
      dict[name]=number;
  }
  // taking inputs from the user and outputing the number
  string query;
  // av ery important STL function for the map is map.find() which returns
  // iterator if we find the key or returns map.end() iterator
  // so we will check for this condition
  while (cin>>query){
      if(dict.find(query)==dict.end()){

       // find till end
      cout<<"Not found"<<endl;
      }
      else{
          cout<<query<<"="<<dict.at(query)<<endl;
      }
  }
  return 0;
}
