#include <bits/stdc++.h>
using namespace std;

bool compare(pair<long long, long long> A, pair<long long, long long> B){
    return A.first > B.first;
}

int main(){
    long long N, K;
    cin >> N >> K;

    vector<pair<long long, long long>> Aganjil;

    long long res = 0;
    
    for (int i = 0; i < N; i++){
        long long A;
        cin >> A;

        if (A % 2 == 1){
            Aganjil.push_back({A, 1});
        } else {
            int p = 0;
            while (A % 2 != 1){
                A /= 2;
                p += 1;
            }

            Aganjil.push_back({A, pow(2, p)});
        }
    }

    sort(Aganjil.begin(), Aganjil.end(), compare);

    int index = 0;
    
    while (index < N){
        res += Aganjil[index].first * min(K, Aganjil[index].second);
        K -= min(K, Aganjil[index].second);
        index += 1;
    }

    cout << res;
    
    return 0;
}