#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<long long> tinggi(N);

    for(int i = 0; i < N; i++){
        cin >> tinggi[N-(i+1)];
    }

    for(int j = 0; j < N; j++){
        cout << tinggi[j] << '\n';
    }

    return 0;
}