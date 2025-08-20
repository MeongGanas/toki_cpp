#include <bits/stdc++.h>
using namespace std;

int main(){
    int P, Q;
    cin >> P;
    cin >> Q;

    int totalFlowers = (P * 2 + Q * 2 + 1);

    if (totalFlowers % 4 == 0){
        cout << totalFlowers / 4;
    } else {
        cout << -1;
    }
    
    return 0;
}