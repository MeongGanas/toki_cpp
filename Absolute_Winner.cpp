// Deskripsi
// Tiga orang baru saja bermain permainan balapan di sebuah konsol. Pada awalnya, setiap pemain memiliki poin awal 0. Mereka bermain setidaknya sebuah babak. Untuk setiap babak:

// Peringkat 1 akan mendapatkan 4 poin.
// Peringkat 2 akan mendapatkan 2 poin.
// Peringkat 3 (peringkat terakhir) akan mendapatkan 1 poin.
// Sekarang, Anda mengetahui bahwa total poin ketiga pemain tersebut masing-masing adalah A, B, dan C. Apakah ada pemain yang merupakan Absolute Winner, yakni orang yang selalu mendapatkan peringkat 1?

// Format Masukan
// Masukan diberikan dalam format berikut:

// A B C
// Format Keluaran
// Sebuah baris berisi string YA apabila ada orang yang merupakan Absolute Winner, atau string TIDAK jika tidak ada.

// Contoh Masukan 1
// 12 6 3
// Contoh Keluaran 1
// YA
// Contoh Masukan 2
// 22 13 7
// Contoh Keluaran 2
// TIDAK

#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    int totalPoinPerBabak = 7;
    int jumlahBabak = (A + B + C) / totalPoinPerBabak;
    int absoluteWinnerPoint = jumlahBabak * 4;

    if (A == absoluteWinnerPoint || B == absoluteWinnerPoint || C == absoluteWinnerPoint){
        cout << "YA";
    } else {
        cout << "TIDAK";
    }
    
    return 0;
}