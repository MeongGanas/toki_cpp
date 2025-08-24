// Deskripsi
// Terdapat N buah lingkaran pada sebuah bidang Kartesius 2D. Setiap lingkaran berjari-jari R satuan. Titik pusat setiap lingkaran tersebut berada pada titik asal (0, 0). Terdapat juga sebuah titik merah pada titik asal (0, 0).

// Sekarang, seluruh lingkaran dan titik merah bergerak horizontal ke arah sumbu X positif (ke arah kanan) secara serentak. Kecepatan titik merah adalah V satuan/detik, sedangkan kecepatan lingkaran ke-i adalah Wi satuan/detik.

// Berapa detik waktu terlama yang akan ditempuh oleh titik merah, sehingga selama ia bergerak selalu terdapat setidaknya sebuah lingkaran yang menyelimutinya? Sebuah lingkaran dikatakan menyelimuti titik merah jika dan hanya jika jarak antara titik pusat lingkaran tersebut dan titik merah tidak lebih dari R satuan.

// Format Masukan
// Masukan diberikan dalam format berikut:

// N R V
// W1 W2 .. WN
// Format Keluaran
// Sebuah baris berisi sebuah bilangan riil yang menyatakan waktu terlama yang akan ditempuh oleh titik merah, sehingga selama ia bergerak selalu terdapat setidaknya sebuah lingkaran yang menyelimutinya. Jawaban Anda tetap dianggap benar apabila selisih absolut atau selisih relatif dengan jawaban juri tidak lebih dari 10-6.

// Apabila titik merah akan selalu terselimuti selamanya, keluarkan -1.

// Contoh Masukan 1
// 4 20 10
// 5 7 14 16
// Contoh Keluaran 1
// 6.666666667
// Contoh Masukan 2
// 1 20 10
// 10
// Contoh Keluaran 2
// -1
// Penjelasan Contoh
// Pada contoh 1:

// Dari detik 0 hingga detik 3.333..., titik merah diselimuti oleh seluruh lingkaran.
// Dari detik 3.333... hingga detik 4, titik merah hanya diselimuti oleh lingkaran 1, 2, dan 3.
// Dari detik 4 hingga detik 5, titik merah hanya diselimuti oleh lingkaran 2 dan 3.
// Dari detik 5 hingga detik 6.666..., titik merah hanya diselimuti oleh lingkaran 2.
// Setelah itu, titik merah tidak diselimuti oleh lingkaran mana pun.
// Pada contoh 2, titik merah selalu diselimuti oleh lingkaran karena kecepatan mereka sama.

// Batasan
// 1 ≤ N ≤ 100
// 1 ≤ R ≤ 1.000
// 1 ≤ V, Wi ≤ 1.000
// R, V, dan Wi adalah bilangan bulat.

#include <bits/stdc++.h>
using namespace std;

double solve(int N, int R, int V, vector<int> W){
    for (int i = 0; i < N; i++){
        if (W[i] == V){
            return -1;
        }
    }

    double longest_time = 0.0;
    for (int Wi: W){
        double relative_speed = abs(V - Wi);
        double time_i = R / relative_speed;
        longest_time = max(longest_time, time_i);
    }
    
    return longest_time;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, R, V;
    cin >> N; cin >> R; cin >> V;

    vector<int> W(N);

    for (int i = 0; i < N; i++){
        cin >> W[i];
    }

    cout << fixed << setprecision(9) << solve(N, R, V, W);

    return 0;
}