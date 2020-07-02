#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //int N;
    //int main_arr[N];
    //for(int i=0;i<N;++i){
      //  cin>>main_arr[i];
    //}
    //int size_arr= main_arr/main_arr[0];
    //int reverse_arr[N];
    //for(int i=0;i<N;++i){
  //      cout<<main_arr[N-i-1];
        //cout<<reverse_arr[i];
    //}
//    return 0;
//}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = N-1; i >=0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}
