// Deskripsi
// Tzaph memiliki sebuah grid berukuran 
// 2
// N
// ×
// 2
// N
// 2N×2N. Ia ingin mengisi grid tersebut dengan ubin tetromino berbentuk T. Ia memiliki tak hingga banyaknya ubin, dan tidak boleh ada ubin yang saling bertimpa atau keluar dari grid. Ia juga dapat merotasi setiap ubinnya sebesar 
// 9
// 0
// ∘
// 90 
// ∘
//   sebelum memasangnya.

// Hitunglah banyaknya ubin maksimum yang dapat dipasang ke dalam grid tersebut.

// Masukan
// N
// Keluaran
// Sebuah baris yang sebuah bilangan yang menyatakan banyaknya ubin maksimum yang dapat Tzaph pasang ke dalam grid tersebut.

// Contoh Masukan 1
// 1
// Contoh Keluaran 1
// 0
// Contoh Masukan 2
// 3
// Contoh Keluaran 2
// 8

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;

    cout << N * N - (N & 1);
    
    return 0;
}