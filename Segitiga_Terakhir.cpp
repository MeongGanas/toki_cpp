// Deskripsi
// Setiap malam, AMnu menyisihkan sedikit waktunya untuk belajar geometri. AMnu sedang menelusuri internet dan menemukan karya ilmiah tentang Segitiga Terakhir. Sebuah segitiga dikatakan Segitiga Terakhir jika dan hanya jika segitiga tersebut mempunyai luas positif, dan berlaku 2A + 2B = 2C dengan A, B, dan C, adalah panjang sisi-sisinya. Diberikan tiga buah bilangan bulat X, Y, dan Z, tentukan apakah segitiga dengan panjang sisi X, Y, dan Z merupakan Segitiga Terakhir.

// Format Masukan
// Masukan diberikan dalam format berikut:

// X Y Z
// Format Keluaran
// Sebuah baris yang berisi string Ya, apabila ada segitiga tersebut yang merupakan Segitiga Terakhir, atau Tidak, jika sebaliknya.

// Contoh Masukan 1
// 3 4 5
// Contoh Keluaran 1
// Tidak
// Contoh Masukan 2
// 4 8 4
// Contoh Keluaran 2
// Tidak
// Contoh Masukan 3
// 5 4 4
// Contoh Keluaran 3
// Ya
// Penjelasan
// Pada contoh pertama, syarat 2A + 2B = 2C tidak terpenuhi

// Pada contoh kedua, luas tidak positif.

// Pada contoh ketiga, sisi yang diberikan merupakan segitiga, dan syarat 2A + 2B = 2C terpenuhi dengan A = 4, B = 4, dan C = 5.

// Batasan
// 1 ≤ X, Y, Z ≤ 109.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, Y, Z;
    cin >> X; cin >> Y; cin >> Z;

    vector<int> sisi_sisi = {X, Y, Z};
    sort(sisi_sisi.begin(), sisi_sisi.end());

    int a = sisi_sisi[0], b = sisi_sisi[1], c = sisi_sisi[2];

    if (a + b > c){
        if (a == b && c - b == 1){
            cout << "Ya" << endl;
        } else {
            cout << "Tidak" << endl;
        }
    } else {
        cout << "Tidak" << endl;
    }

    return 0;
}