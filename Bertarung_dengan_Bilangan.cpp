#include <bits/stdc++.h>
using namespace std;

long long gcd(long long p, long long q){
    long long res = min(p, q);

    while (res > 1){
        if (p % res == 0 && q % res == 0)
            break;
        res--;
    }

    return res;
}   

int main(){
    int N;
    cin >> N;
    
    long long X = 1;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int j = 0; j < N; j++){
        long long B;
        cin >> B;
        X *= pow(A[j], B);
    }

    int M;
    cin >> M;

    long long Y = 1;
    vector<int> C(M);
    for (int i = 0; i < M; i++){
        cin >> C[i];
    }

    for (int j = 0; j < M; j++){
        long long D;
        cin >> D;
        Y *= pow(C[j], D);
    }

    cout << gcd(X, Y);

    return 0;
}