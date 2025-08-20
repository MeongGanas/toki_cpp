#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    bool nevest = N < 7;
    bool tzaph = N > 1 && (N % 2 == 1 || N == 2);

    if (tzaph && nevest){
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}