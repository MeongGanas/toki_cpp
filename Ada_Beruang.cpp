// Deskripsi
// Anda sedang bermain permainan berbahaya dengan mencolek seekor beruang 
// N
// N kali. Anda mencolek beruang tersebut untuk ke-
// i
// i kalinya pada waktu 
// A
// i
// A 
// i
// ​
//  .

// Namun, beruang tersebut cukup agresif. Jika Anda mencolek beruang tersebut pada waktu 
// t
// t, ia akan menyerang Anda pada waktu 
// t
// +
// D
// t+D. Anda harus menunduk pada saat yang sama dengan setiap serangan beruang tersebut.

// Berapa kali Anda harus mencolek dan menunduk di saat yang bersamaan?

// Batasan
// 1
// ≤
// N
// ≤
// 100
// 000
// 1≤N≤100000.
// 1
// ≤
// D
// ≤
// 1
// 0
// 9
// 1≤D≤10 
// 9
//  .
// 1
// ≤
// A
// 1
// <
// A
// 2
// <
// …
// <
// A
// N
// ≤
// 1
// 0
// 9
// 1≤A 
// 1
// ​
//  <A 
// 2
// ​
//  <…<A 
// N
// ​
//  ≤10 
// 9
//  .
// Masukan
// N D
// A1 A2 ... AN
// Keluaran
// Sebuah bilangan bulat yang menyatakan berapa kali Anda harus mencolek dan menunduk di saat yang bersamaan.

// Contoh Masukan 1
// 6 8
// 3 5 7 10 13 18
// Contoh Keluaran 1
// 2
// Contoh Masukan 2
// 4 1
// 1 2 3 4
// Contoh Keluaran 2
// 3
// Penjelasan
// Pada contoh pertama, Anda harus mencolek dan menunduk di saat yang sama pada waktu 
// 13
// 13 dan 
// 18
// 18.

// Pada contoh kedua, Anda harus mencolek dan menunduk di saat yang sama pada waktu 
// 2
// 2, 
// 3
// 3, dan 
// 4
// 4.

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int solution(int N, int D, vector<int> A){
    int res = 0;

    for(int Ai: A){
        int target = Ai - D;

        if(binary_search(A.begin(), A.end(), target)){
            res += 1;
        }
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                   

    int N;
    cin >> N;

    int D;
    cin >> D;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    cout << solution(N, D, A);

    return 0;
}