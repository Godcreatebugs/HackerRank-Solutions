#include <iostream>
#include <cstdio>
using namespace std;

void EvenOddChecker(int p){
    if (p%2==0) {
        cout<<"even"<<"\n";
        }
    else
    {
        cout<< "odd"<<"\n";
        }
}
void ConditionChecker(int a, int b){
    for(a ; a<=b && a<10;++a){
        //cuz havent found better alternative for dictionary like python
        if (a == 1) { cout << "one" << endl; }
        else if (a == 2) { cout << "two" << endl; }
        else if (a == 3) { cout << "three" << endl; }
        else if (a == 4) { cout << "four" << endl; }
        else if (a == 5) { cout << "five" << endl; }
        else if (a == 6) { cout << "six" << endl; }
        else if (a == 7) { cout << "seven" << endl; }
        else if (a == 8) { cout << "eight" << endl; }
        else if (a == 9) { cout << "nine" << endl; }
    }
    while(a<=b){
        EvenOddChecker(a);
        a++;
    }

}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    ConditionChecker(a,b);
    return 0;
}
/*
int main() {
    int a, b;
    cin >> a;
    cin >> b;

    for(int i = a; i < (b + 1); i++) {
        if (i == 1) { cout << "one" << endl; }
        else if (i == 2) { cout << "two" << endl; }
        else if (i == 3) { cout << "three" << endl; }
        else if (i == 4) { cout << "four" << endl; }
        else if (i == 5) { cout << "five" << endl; }
        else if (i == 6) { cout << "six" << endl; }
        else if (i == 7) { cout << "seven" << endl; }
        else if (i == 8) { cout << "eight" << endl; }
        else if (i == 9) { cout << "nine" << endl; }
        else if (i % 2 == 0) { cout << "even" << endl; }
        else { cout << "odd" << endl; }
    }

    return 0;
}
*/
