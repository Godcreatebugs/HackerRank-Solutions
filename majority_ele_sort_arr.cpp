/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
#include <iostream>
using namespace std;
int main(){
  string str_inr=getline(cin,str);
  int len_str= str_inr.length();
  char char_arr[len_str];
  for(int i=0;i<len_str;i++){
    char pop_ele;
    pop_ele=str_inr.pop_back();
    char_arr.
  }

}
*/

#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;
int max_repeat(int arr_sample[]){
    // you begin with the sorted array
    int sample_size= sizeof(arr_sample)/sizeof(arr_sample[0]);

    map <int,int> int_map;
    //for(int i=0;i<sample_size;++i){

    //}
    int i=0;
    while (i<sample_size){
        int repeat_number=0;
        if (arr_sample[i]==arr_sample[i+1]){
            repeat_number +=1;

        }
        int_map[repeat_number]=arr_sample[i];
    }
    auto x = std::max_element(int_map.begin(), int_map.end(), int_map.value_comp());

    //cout << x->first << " : " << x->second << endl;
    return x->first,x->second;


}



int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    // Array is ready after this
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size_arr= sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size_arr);

    //auto x = std::max_element(m.begin(), m.end(), m.value_comp());

    //cout << x->first << " : " << x->second << endl;

    int first_max,second_max;
    first_max,second_max=max_repeat(arr);
    cout<<first_max<<second_max<<endl;
}

    //return 0;
