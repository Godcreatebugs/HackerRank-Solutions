#include <iostream>
#include <vector>

using namespace std;
void reverseWord(vector<char> arr,int start,int end ){
  //This is used to reverse a word
  char temp = ' ';
  while(start < end){
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }

}
vector<char> reverse_arr(vector<char> arr){
//Here we are performing and we reverse word each time we hit white space
  int n = arr.size();
  int wordStart = 0;
  for (int i =0;i<n;i++){
    if (arr[i]==' ') {
      //if we have hit whitespace we reverse the word
      if (wordStart !=0){
        reverseWord(arr,wordStart,i-1); //word got reversed
        wordStart =0;
      }

    }
    else if (i==n-1){
      // we have reached at the end of char array
      if(wordStart != 0)
        reverseWord(arr,wordStart,i);
    }
    else{
      if(wordStart == 0)
        wordStart=i;
    }
  }

  return arr;
}




int main() {
  vector <char> char_arr {'p', 'e', 'r', 'f', 'e', 'c', 't', ' ','m', 'a', 'k', 'e', 's', ' ',  'p', 'r', 'a', 'c', 't', 'i', 'c', 'e' };
  vector<char> res = reverse_arr(char_arr);
  for(unsigned int i=0;i<res.size();i++){
    cout<<char_arr[i]<< " ";
  }
  return 0;
}
