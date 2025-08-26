// Deskripsi
// Nama Bonbon diberikan atas saran dari pemilik yang sekarang dan disetujui oleh pemilik yang dulu.

// Diberikan sebuah string yang berisi huruf kecil. Bonbon dapat mengacak string tersebut dengan menukar dua buah huruf yang bersebelahan sebanyak tak hingga kali. Tujuan Bonbon adalah memaksimalkan banyak kemunculan substring “bonbon” yang ada di string tersebut. Berapa kemunculan maksimal yang bisa Bonbon dapatkan?

// Format Masukan
// Masukan diberikan dalam format berikut:

// S
// Format Keluaran
// Sebuah bilangan bulat banyaknya substring “bonbon” maksimal yang bisa didapatkan.

// Contoh Masukan 1
// abonabon
// Contoh Keluaran 1
// 1
// Contoh Masukan 2
// bobobobo
// Contoh Keluaran 2
// 0
// Contoh Masukan 3
// nbobononb
// Contoh Keluaran 3
// 2
// Penjelasan
// Pada contoh pertama, salah satu string yang memenuhi adalah "abonbona".

// Pada contoh kedua, tidak ada huruf ‘n’ yang bisa digunakan untuk membentuk substring “bonbon”.

// Pada contoh ketiga, string yang memenuhi adalah "bonbonbon".

// Batasan
// 1 ≤ |S| ≤ 105.
// S hanya terdiri dari huruf kecil.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string S; cin >> S;

    // map<char, int> count_sub_str = {
    //     {'b', 0}, {'o', 0}, {'n', 0}
    // };

    // for (char chr: S){
    //     if (chr == 'b' || chr == 'o' || chr == 'n'){
    //         count_sub_str[chr] += 1;
    //     }
    // }

    // int res = S.size();
    // for (auto const& pair: count_sub_str){
    //     char chr = pair.first;
    //     int total = pair.second;

    //     if (total < res){
    //         res = total;
    //     }
    // }

    // if (res == 0){
    //     cout << res;
    // } else {
    //     cout << res - 1;
    // }

    int a = 0, b = 0, c = 0;

    for (char chr: S){
        if (chr == 'o') a++;
        if (chr == 'b') b++;
        if (chr == 'n') c++;
    }

    int res = min(a, min(b, c));
    if (res == 0){
        cout << res;
    } else {
        cout << res - 1;
    }

    return 0;
}