// Deskripsi
// Diberikan sebuah barisan 
// A
// A berukuran 
// N
// N, hitung hasil perkalian dari XOR semua pasangan pada barisan. Lebih formalnya, Anda diminta untuk menghitung hasil perkalian dari (
// A
// i
// ⊕
// A
// j
// A 
// i
// ​
//  ⊕A 
// j
// ​
//  ), untuk semua 
// 1
// ≤
// i
// <
// j
// ≤
// N
// 1≤i<j≤N. Karena jawaban bisa sangat besar, hitung perkaliannya modulo 
// 998244353
// 998244353.

// Catatan: 
// ⊕
// ⊕ menyatakan operasi bitwise XOR.

// Masukan
// N
// A1 A2 ... AN
// Keluaran
// Sebuah baris yang berisi hasil perkalian modulo 
// 998244353
// 998244353.

// Contoh Masukan 1
// 3
// 2 3 5
// Contoh Keluaran 1
// 42
// Contoh Masukan 2
// 4
// 2 5 11 7
// Contoh Keluaran 2
// 105840
// Penjelasan
// Pada contoh masukan pertama, nilai yang dihitung adalah: 
// (
// A
// 1
// ⊕
// A
// 2
// )
// ×
// (
// A
// 1
// ⊕
// A
// 3
// )
// ×
// (
// A
// 2
// ⊕
// A
// 3
// )
// =
// (
// 2
// ⊕
// 3
// )
// ×
// (
// 2
// ⊕
// 5
// )
// ×
// (
// 3
// ⊕
// 5
// )
// =
// 1
// ×
// 7
// ×
// 6
// =
// 42
// (A 
// 1
// ​
//  ⊕A 
// 2
// ​
//  )×(A 
// 1
// ​
//  ⊕A 
// 3
// ​
//  )×(A 
// 2
// ​
//  ⊕A 
// 3
// ​
//  )=(2⊕3)×(2⊕5)×(3⊕5)=1×7×6=42.

// Batasan
// 2
// ≤
// N
// ≤
// 200
// 000
// 2≤N≤200000.
// 1
// ≤
// A
// i
// ≤
// 2000
// 1≤A 
// i
// ​
//  ≤2000.

#include <bits/stdc++.h>
using namespace std;

long long modulo = 998244353;

int solution(int N, vector<int> A){
    long long res = 1;

    for (int i = 0; i < N; i++){
        for (int j = i+1; j < N; j++){
            int AiAj = (A[i] ^ A[j]);
            res = (res * AiAj) % modulo;
        }
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    if (N > 2000){
        cout << 0;
        return 0;
    }

    cout << solution(N, A);

    return 0;
}