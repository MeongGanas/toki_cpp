// Deskripsi
// Terdapat sebuah grid dengan 
// N
// N
//  baris dan 
// M
// M
//  kolom, yang masing-masing selnya akan dibangun dengan tepat satu buah menara. Menara yang dibangun mempunyai warna hitam ataupun putih.

// Anda ingin memaksimalkan pasangan menara berbeda warna yang saling terhubung. Misalkan 
// (
// r
// ,
// c
// )
// (r,c)
//  menyatakan posisi pada baris ke-
// r
// r
//  dan kolom ke-
// c
// c
// , dua buah menara dikatakan terhubung apabila memenuhi salah satu dari:

// terdapat 
// x
// x
//  dan 
// y
// y
//  sehingga posisi sebuah menara adalah 
// (
// x
// ,
// y
// )
// (x,y)
//  dan posisi menara lainnya adalah 
// (
// x
// +
// 1
// ,
// y
// +
// 1
// )
// (x+1,y+1)
// ;
// terdapat 
// x
// x
//  dan 
// y
// y
//  sehingga posisi sebuah menara adalah 
// (
// x
// ,
// y
// )
// (x,y)
//  dan posisi menara lainnya adalah 
// (
// x
// +
// 1
// ,
// y
// −
// 1
// )
// (x+1,y−1)
// .
// Bangunlah menara pada grid tersebut, sehingga pasangan menara berbeda warna yang terhubung semaksimal mungkin.

// Format Masukan
// N M
// Format Keluaran
// Sebuah grid 
// N
// ×
// M
// N×M
// , masing-masing sel berisi salah satu dari karakter berikut:

// B, apabila sel diisi dengan menara hitam;
// W, apabila sel diisi dengan menara putih.
// Contoh Masukan 1
// 2 3
// Contoh Keluaran 1
// WBW
// WBW
// Contoh Masukan 2
// 4 1
// Contoh Keluaran 2
// B
// W
// W
// B
// Penjelasan
// Pada contoh keluaran pertama yang diberikan, banyaknya pasangan menara berbeda warna yang terhubung berada pada:

// (
// 1
// ,
// 1
// )
// (1,1)
//  dan 
// (
// 2
// ,
// 2
// )
// (2,2)
// ;
// (
// 1
// ,
// 2
// )
// (1,2)
//  dan 
// (
// 2
// ,
// 3
// )
// (2,3)
// ;
// (
// 1
// ,
// 2
// )
// (1,2)
//  dan 
// (
// 2
// ,
// 1
// )
// (2,1)
// ;
// (
// 1
// ,
// 3
// )
// (1,3)
//  dan 
// (
// 2
// ,
// 2
// )
// (2,2)
// .
// Tidak ada cara pembangunan lain yang memberikan pasangan yang lebih banyak.

// Batasan
// 1
// ≤
// N
// ,
// M
// ≤
// 100
// 1≤N,M≤100
// .

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;

    cin >> N;
    cin >> M;

    string res = "";
    for(int i = 0; i < N; i++){
        string temp = "";

        for (int j = 0; j < M; j++){
            if (j % 2 == 0){
                temp += "W";
            } else {
                temp += "B";
            }
        }

        temp += '\n';
        res += temp;
    }

    cout << res;

    return 0;
}