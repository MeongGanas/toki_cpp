// Deskripsi
// bombsmol

 

// Xima telah menciptakan bom yang mempunyai radius 
// R
// R
// . Sebuah petak dikatakan berada di dalam radius sebuah bom jika dan hanya jika minimal dari beda jarak horizontal dan beda jarak vertikal tidak melebihi 
// R
// R
// . Secara formal, sebuah petak dengan koordinat 
// (
// a
// ,
// b
// )
// (a,b)
//  berada dalam radius bom yang berada pada 
// (
// c
// ,
// d
// )
// (c,d)
//  jika dan hanya jika 
// min
// ⁡
// (
// ∣
// a
// −
// c
// ∣
// ,
// ∣
// b
// −
// d
// ∣
// )
// ≤
// R
// min(∣a−c∣,∣b−d∣)≤R
// .

// Diberikan grid 
// N
// ×
// M
// N×M
// , misi Anda adalah untuk menempatkan bom sesedikit mungkin sehingga setiap petak pada grid berada di dalam radius setidaknya satu bom. Tentukan banyaknya bom minimum yang dibutuhkan.

// Format Masukan
// N M R
// Format Keluaran
// Sebuah bilangan bulat yang menyatakan banyaknya bom minimum yang dibutuhkan.

// Contoh Masukan 1
// 1 7 3
// Contoh Keluaran 1
// 1
// Contoh Masukan 2
// 5 5 0
// Contoh Keluaran 2
// 5
// Penjelasan
// Pada contoh masukan 1, bom dapat ditempatkan di 
// (
// 1
// ,
// 2
// )
// (1,2)
// .

// Pada contoh masukan 2, bom dapat ditempatkan di 
// (
// 1
// ,
// 1
// )
// (1,1)
// , 
// (
// 2
// ,
// 2
// )
// (2,2)
// , 
// (
// 3
// ,
// 3
// )
// (3,3)
// , 
// (
// 4
// ,
// 4
// )
// (4,4)
// , dan 
// (
// 5
// ,
// 5
// )
// (5,5)
// .

// Batasan
// 1
// ≤
// N
// ,
// M
// ≤
// 1
// 000
// 1≤N,M≤1000
// .
// 0
// ≤
// R
// ≤
// 1
// 000
// 0≤R≤1000
// .

#include <bits/stdc++.h>
using namespace std;

int main(){
    float N, M, R;
    cin >> N; cin >> M; cin >> R;

    int radius = R * 2 + 1;

    int x_axis = ceil(M / radius);
    int y_axis = ceil(N / radius);

    cout << min(x_axis, y_axis) << endl;

    return 0;
}