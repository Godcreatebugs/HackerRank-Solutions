#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
// factorial is done with recursion.
int factorial(int n) {
    if (n==0 || n==1){
        return n;
    }
    else{
        return n*factorial(n-1);
    }

}

int main()
{
    //why we use this ofstream statemenet?
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
