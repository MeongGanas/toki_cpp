// Deskripsi
// Terdapat sebuah barisan A dengan N bilangan. Nevest dapat melakukan operasi sebagai berikut:

// Pilih dua buah bilangan bulat 
// i
// i
//  dan 
// j
// j
// , dimana 
// i
// ≠
// j
// i
// 
// =j
// .
// Ubah nilai 
// A
// i
// A 
// i
// ​
 
//  dan 
// A
// j
// A 
// j
// ​
 
//  masing-masing menjadi 
// (
// A
// i
// +
// A
// j
// )
// /
// 2
// (A 
// i
// ​
//  +A 
// j
// ​
//  )/2
// . Perhatikan bahwa banyaknya bilangan tidak berubah.
// Nevest dapat melakukan operasi ini berapa kali pun (bisa saja ia tidak melakukan apa-apa). Berapakah banyak bilangan berbeda maksimal yang dapat dibentuk setelah Nevest melakukan operasi-operasi tersebut?

// Format Masukan
// N
// A1 A2 .. AN
// Format Keluaran
// Sebuah bilangan bulat yang menyatakan bilangan berbeda terbanyak yang dapat dibentuk.

// Contoh Masukan 1
// 5
// 1 1 2 2 2
// Contoh Keluaran 1
// 4
// Contoh Masukan 2
// 2
// 1 2
// Contoh Keluaran 2
// 2
// Penjelasan
// Pada contoh masukan 1, Nevest dapat melakukan operasi-operasi berikut:

// Pilih 
// i
// =
// 2
// i=2
//  dan 
// j
// =
// 3
// j=3
// , kemudian barisan berubah menjadi 
// [
// 1
// ,
 
// 1.5
// ,
 
// 1.5
// ,
 
// 2
// ,
 
// 2
// ]
// [1, 1.5, 1.5, 2, 2]
// .
// Pilih 
// i
// =
// 3
// i=3
//  dan 
// j
// =
// 5
// j=5
// , kemudian barisan berubah menjadi 
// [
// 1
// ,
 
// 1.5
// ,
 
// 1.75
// ,
 
// 2
// ,
 
// 1.75
// ]
// [1, 1.5, 1.75, 2, 1.75]
// .
// Pada contoh masukan 2, karena semua bilangan sudah berbeda, maka Nevest tidak perlu melakukan operasi apapun.

// Batasan
// 1
// ≤
// N
// ,
// A
// i
// ≤
// 2
// ×
// 1
// 0
// 5
// 1≤N,A 
// i
// ​
//  ≤2×10 
// 5
 
// .

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;

    set<int> unique_num = {};

    for (int i = 0; i < N; i++){
        int A; cin >> A;

        unique_num.insert(A);
    }

    int unique_num_size = unique_num.size();

    if (unique_num_size == N){
        cout << N;
    } else if (unique_num_size > 1 && unique_num_size < N){
        cout << N-1;
    } else {
        cout << 1;
    }

    return 0;
}