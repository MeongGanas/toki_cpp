#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int A1;
    cin >> A1;

    int smallestA = abs(A1);

    for (int i = 1; i < N; i++){
        int A;
        cin >> A;

        if (abs(A) < smallestA){
            smallestA = abs(A);
        }
    }

    cout << smallestA;

    return 0;
}