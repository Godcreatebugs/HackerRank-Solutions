#include <iostream>
#include <list>
using namespace std;

  //table[index] is a valid op
  //here table ele are keys are index(given by hash function) and values are list numbers
 //list has valid op like vector, it is almost same except for O(n).
class HashTable{
private:
  //so you need a list and some attributes to define our hashmap
  list <int> *table;
  int list_len; //will be used to make a hash function

  //hashing function has to assign unique numbers to list elements
   int getHash(int key){
     return key%list_len;
   }
  //define a functions to add, remove from list and traversing is expensive operation in list.
public:
  //this is a default constructor
  HashTable(int n){
    list_len = n;
    table = new list <int>[list_len]; //allocating a list of intergers that have n capacity
  }
  //add element
  void InsertEle(int key){
    table[getHash(key)].push_back(key);
    //tables hash_func value number is key , this is a little confusing
  }
  void DeleteEle(int key){
    int x = getHash(key); //which will returns the key
    list<int>::iterator i; //iterator of type int
    for(i = table[x].begin(),i !=table[x].end();i++){

    }

  }
};
