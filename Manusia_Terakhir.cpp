// Deskripsi
// Teshima bermimpi bahwa ia adalah manusia terakhir di planet Bumi. Di dalam mimpi tersebut, planet Bumi datar dan berbentuk bidang Kartesian. Ia pun pergi bersepeda mencari meteor yang mengakibatkan punahnya umat manusia.

// Teshima bersepeda dari rumahnya yang berada di koordinat (0,0). Secara berturut-turut, ia bersepeda sebagai berikut:

// Bersepeda ke arah Utara (atas / y-positif) sejauh A satuan.
// Bersepeda ke arah Timur (kanan / x-positif) sejauh B satuan.
// Bersepeda ke arah Selatan (bawah / y-negatif) sejauh C satuan.
// Bersepeda ke arah Barat (kiri / x-negatif) sejauh D satuan.
// Teshima cukup yakin bahwa ia telah menempuh total jarak sejauh N satuan, dengan kata lain N = A + B + C + D. Setelah menempuh perjalanan tersebut, ia pun sampai ke meteor yang berada di koordinat (X,Y). Ia sangat penasaran. Carilah nilai A, B, C, dan D yang mungkin apabila keempatnya merupakan bilangan bulat non-negatif!

// Format Masukan
// Masukan diberikan dalam format berikut:

// N X Y
// Format Keluaran
// Empat buah bilangan bulat non-negatif A, B, C, dan D. Apabila terdapat lebih dari satu kemungkinan, keluarkan yang mana saja. Apabila tidak ada kemungkinan yang memenuhi, keluarkan -1.

// Contoh Masukan 1
// 17 -4 3
// Contoh Keluaran 1
// 5 3 2 7
// Contoh Masukan 2
// 100 0 0
// Contoh Keluaran 2
// 0 50 0 50
// Contoh Masukan 3
// 24 25 0
// Contoh Keluaran 3
// -1
// Batasan
// 1 ≤ N ≤ 100
// -25 ≤ X, Y ≤ 25

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin >> n; cin >> x; cin >> y;

    if (abs(x) + abs(y) > n || (n - abs(x) - abs(y)) % 2 == 1){
        cout << -1 << endl;
        return 0;
    }

    int a = 0, b = 0, c = 0, d = 0;

    if (x > 0) b = abs(x);
    else if (x < 0) d = abs(x);

    if(y > 0) a = abs(y);
    else if (y < 0) c = abs(y); 


    while (a + b + c + d != n){
        b += 1; d += 1;
        if (a + b + c + d == n){
            break;
        }

        a += 1; c += 1;
        if (a + b + c + d == n){
            break;
        }
    }

    cout << a << " " << b << " " << c << " " << d;

    return 0;
}