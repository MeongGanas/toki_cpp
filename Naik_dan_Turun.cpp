// Deskripsi
// Terdapat sebuah barisan bilangan dengan panjang N. Pada mulanya, seluruh elemen bernilai 0. Terdapat Q buah perintah, masing-masing berupa salah satu dari:

// 1 X Y: tambahkan nilai dari X elemen pertama dengan Y.
// 2 X Y: kurangkan nilai dari X elemen terakhir dengan Y.
// Setelah seluruh perintah dijalankan, seluruh elemen akan diganti dengan nilai absolutnya. Pada akhirnya, apakah nilai elemen terbesar pada barisan tersebut?

// Format Masukan
// Masukan diberikan dalam format berikut:

// N Q
// T1 X1 Y1
// T2 X2 Y2
// .
// .
// TQ XQ YQ
// dengan Ti menyatakan tipe perintah ke-i dengan nilai X adalah Xi dan Y adalah Yi.

// Format Keluaran
// Sebuah baris berisi sebuah bilangan bulat yang menyatakan nilai elemen terbesar pada barisan tersebut pada akhirnya.

// Contoh Masukan
// 6 3
// 1 2 3
// 2 3 5
// 1 4 1
// Contoh Keluaran
// 5
// Penjelasan Contoh
// Pada awalnya, barisan berisi elemen-elemen berikut: [0, 0, 0, 0, 0, 0].

// Setelah perintah ke-1, barisan menjadi [3, 3, 0, 0, 0, 0].
// Setelah perintah ke-2, barisan menjadi [3, 3, 0, -5, -5, -5].
// Setelah perintah ke-3, barisan menjadi [4, 4, 1, -4, -5, -5].
// Setelah masing-masing elemen diganti dengan nilai absolutnya, barisan menjadi [4, 4, 1, 4, 5, 5]. Nilai elemen terbesar pada barisan tersebut adalah 5.

// Batasan
// 1 ≤ N ≤ 109
// 1 ≤ Q ≤ 100.000
// 1 ≤ Ti ≤ 2
// 1 ≤ Xi ≤ N
// 1 ≤ Yi ≤ 109


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q; 
    cin >> N; cin >> Q;

    long long first = 0, second = 0;

    for (int i = 0; i < Q; i++){
        int T;
        long long X, Y;
        cin >> T >> X >> Y;

        if (T == 1){
            first += Y;
            if (X == N) second += Y;
        } else {
            second -= Y;
            if (X == N) first -= Y;
        }
    }

    cout << max(abs(first), abs(second)) << endl;

    return 0;
}