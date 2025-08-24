// Djodjo mengajar di sekolah yang memiliki 
// N
// N murid. Mereka sekarang duduk di ruangan-ruangan kelas. Ruangan-ruangan kelas bisa direpresentasikan sebagai 
// M
// M titik pada lingkaran, dinomori dari 
// 1
// 1 sampai 
// M
// M, dengan ruangan kelas 
// i
// i berada di sebelah kiri ruangan kelas 
// i
// +
// 1
// i+1, dan ruangan kelas 
// M
// M berada di sebelah kiri ruangan 
// 1
// 1.

// Djodjo ingin memberikan makanan ke semua muridnya. Murid ke-
// i
// i berada di ruangan kelas 
// A
// i
// A 
// i
// ​
//  . Dalam satu detik, Djodjo bisa bergerak ke ruangan yang berada di sebelah ruangan tempat ia berada sekarang. Ia dapat memberikan makanan kepada muridnya secara instan ketika ia sudah berada di ruangan yang sama dengan muridnya.

// Djodjo dapat mulai dari ruangan kelas mana pun. Ia ingin tahu waktu minimum yang diperlukan untuk memberi makan ke semua muridnya. Perhatikan bahwa ia bisa memberi makan ke murid-muridnya dalam urutan apa pun.

// Masukan
// N M
// A1 A2 .. AN
// Keluaran
// Sebuah baris berisi sebuah bilangan bulat yang menyatakan waktu minimum yang diperlukan untuk memberi makanan ke semua muridnya.

// Contoh Masukan 1
// 3 10
// 2 10 8
// Contoh Keluaran 1
// 4
// Contoh Masukan 2
// 3 1
// 1 1 1
// Contoh Keluaran 2
// 0
// Penjelasan
// Pada contoh pertama, salah satu cara Djodjo untuk memberi makanan untuk muridnya adalah:

// mulai dari ruangan kelas 
// 2
// 2 dan beri makanan ke murid di ruangan tersebut;
// bergerak ke kiri sampai ruangan kelas 
// 10
// 10 (
// 2
// →
// 1
// →
// 10
// 2→1→10), yang menghabiskan waktu 
// 2
// 2 detik, kemudian beri makanan ke murid di ruangan tersebut;
// bergerak ke kiri sampai ruangan kelas 
// 8
// 8 (
// 10
// →
// 9
// →
// 8
// 10→9→8), yang menghabiskan waktu 
// 2
// 2 detik, kemudian beri makanan ke murid di ruangan tersebut.
// Total waktu yang dihabiskan adalah 
// 4
// 4 detik, dan tidak terdapat cara lain untuk memberi makanan kepada semua muridnya dengan waktu yang lebih singkat.

// Pada contoh kedua, Djodjo mulai di ruangan kelas 
// 1
// 1, dan memberi makanan kepada semua muridnya tanpa berpindah ruangan.

// Batasan
// 1
// ≤
// N
// ≤
// 200
// 000
// 1≤N≤200000.
// 1
// ≤
// M
// ≤
// 1
// 0
// 9
// 1≤M≤10 
// 9
//  .
// 1
// ≤
// A
// i
// ≤
// M
// 1≤A 
// i
// ​
//  ≤M.

#include <bits/stdc++.h>
using namespace std;

int solve(int N, int M, vector<int> A){
    sort(A.begin(), A.end());

    int prev_gap = 0;

    for (int i = 0; i < N - 1; i++){
        int calc_gap = A[i+1] - A[i];
        if (calc_gap > prev_gap){
            prev_gap = calc_gap;
        }
    }

    int rotate_gap = M - A[N-1] + A[0];

    if (rotate_gap > prev_gap){
        prev_gap = rotate_gap;
    }

    return M - prev_gap;
}

int main(){
    int N, M;
    cin >> N; cin >> M;

    vector<int> A(N);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    cout << solve(N, M, A);

    return 0;
}